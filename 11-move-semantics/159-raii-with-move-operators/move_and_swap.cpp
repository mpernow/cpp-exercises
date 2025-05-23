#include <iostream>

using namespace std;

class String
{
  private:
    int size;
    char *data;

  public:
    String(int size) : size(size), data(new char[size]) {}

    String(const String &arg) : size(arg.size)
    {
        cout << "Calling copy constructor\n";
        data = new char[size];  // Allocate the heap memory for arg's data

        for (int i = 0; i < size; ++i)  // Populate the memory with arg's data
            data[i] = arg.data[i];
    }

    // Assignment Operator
    String &operator=(const String &arg)
    {
        cout << "Calling assignment operator\n";

        if (&arg != this)
        {  // Check for self-assignment
            cout << "Reallocating memory\n";
            delete[] data;              // Release the original memory
            data = new char[arg.size];  // Allocate the data member

            size = arg.size;  // Assign to the size member

            for (int i = 0; i < size; ++i)  // Populate the data
                data[i] = arg.data[i];
        }

        return *this;  // Return the assigned-to object
    }

    // Move constructor
    String(String &&arg) noexcept
    {
        cout << "Move constructor called" << endl;
        data = arg.data;
        size = arg.size;

        // Make sure arg does not delete the pointer that is now owned by this
        // Set arg's values to null
        arg.data = nullptr;
        arg.size = 0;
    }

    // Move assignment operator
    String &operator=(String &&arg) noexcept
    {
        String temp(std::move(arg));  // Call move constructor
        swap(*this, temp);            // Exchange data
        return *this;
    }

    // Destructor
    ~String()
    {
        cout << "Calling destructor: " << static_cast<void *>(data) << endl;
        delete[] data;  // Release the heap memory for the data
    }

    friend void swap(String &l, String &r) noexcept;

    void print()
    {
        cout << "String with size = " << size;
        cout << ", data address " << static_cast<void *>(data) << endl;
    }
};

inline void swap(String &l, String &r) noexcept
{
    using std::swap;  // Important!
    swap(l.size, r.size);
    swap(l.data, r.data);
}

int main()
{
    String a{5};
    cout << "a: ";
    a.print();
    {
        String b{6};
        cout << "b: ";
        b.print();
        cout << endl;
        cout << "Copy assignment of b from a\n";
        b = a;
        cout << "b: ";
        b.print();
        cout << "a: ";
        a.print();
        cout << endl;
        cout << "Copy construction of c from b\n";
        String c{b};
        cout << "b: ";
        b.print();
        cout << "c: ";
        c.print();
        cout << endl;
        cout << "Move assignment of c from a\n";
        c = std::move(a);
        cout << "a: ";
        a.print();
        cout << "c: ";
        c.print();
        cout << endl;
    }
}
