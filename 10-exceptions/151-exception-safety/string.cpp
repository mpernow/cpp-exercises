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
        data = new char[size];
        for (int i = 0; i < size; ++i)
        {
            data[i] = arg.data[i];
        }
    }

    String &operator=(const String &arg)
    {
        cout << "Calling assignment operator\n";
        if (&arg != this)
        {
            cout << "Reallocating memory\n";
            // Allocate before deleteing
            char *ndata = new char[arg.size];
            delete[] data;
            data = ndata;

            size = arg.size;
            for (int i = 0; i < size; ++i)
            {
                data[i] = arg.data[i];
            }
        }
        return *this;
    }

    ~String()
    {
        cout << "Calling destructor: " << static_cast<void *>(data) << endl;
        delete[] data;
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
    cout << "\nIn String::swap\n";
    swap(l.size, r.size);
    swap(l.data, r.data);
}

int main()
{
    String a(5), b(6);
    cout << "Before swapping:\n";
    cout << "a: ";
    a.print();
    cout << "b: ";
    b.print();

    swap(a, b);

    cout << "After swapping:\n";
    cout << "a: ";
    a.print();
    cout << "b: ";
    b.print();
    cout << endl;
}
