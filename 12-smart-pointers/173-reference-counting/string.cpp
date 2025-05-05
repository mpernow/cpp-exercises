#include <iostream>

using namespace std;

class String
{
  private:
    int size;
    char *data;
    int *counter;

  public:
    String(int size) : size(size)
    {
        counter = new int{0};  // Allocate the counter on the heap
        data = new char[size];

        ++*counter;
    }

    ~String() noexcept
    {
        cout << "Destructor: data = " << (void *)data
             << ", counter = " << counter << ", count = " << *counter << endl;
        --*counter;
        if (*counter == 0)
        {
            cout << "Deleting shared memory at " << static_cast<void *>(data)
                 << endl;
            delete counter;
            delete[] data;
        }
    }

    friend void swap(String &l, String &r) noexcept;

    String(const String &arg)
    {
        // Shallow cpy of argument
        size = arg.size;
        data = arg.data;
        counter = arg.counter;

        ++*counter;
    }

    // String &operator=(const String &arg)
    // {
    //     cout << "Assigned to object: data = " << (void *)data
    //          << ", counter = " << counter << ", count = " << *counter <<
    //          endl;
    //     if (data != arg.data)
    //     {
    //         // If arg is bound to different shared memory, unbind from out
    //         // current shared memory
    //         --*counter;

    //         if (*counter == 0)
    //         {
    //             cout << "Deleting shared memory at "
    //                  << static_cast<void *>(data) << endl;
    //             cout << "Deleting counter at " << static_cast<void
    //             *>(counter)
    //                  << endl;
    //             delete counter;
    //             delete[] data;
    //         }
    //         size = arg.size;
    //         data = arg.data;
    //         counter = arg.counter;

    //         ++*counter;
    //     }
    //     return *this;
    // }

    String &operator=(const String &arg)
    {
        cout << "Assigned-to object: data = " << (void *)data
             << ", counter = " << counter << ", count = " << *counter << endl;
        String temp(arg);
        swap(*this, temp);
        return *this;
    }

    String(String &&arg) noexcept
    {
        cout << "Move contructor called" << endl;
        data = arg.data;
        size = arg.size;
        counter = arg.counter;

        // Prevent double deletion
        arg.data = nullptr;
        arg.counter = nullptr;
    }

    String &operator=(String &&arg) noexcept
    {
        cout << "Move assignment called" << endl;
        String temp(std::move(arg));
        swap(*this, temp);

        return *this;
    }

    int length() { return size; }
    int count() { return *counter; }

    void print()
    {
        cout << "size = " << size;
        cout << ", data address " << static_cast<void *>(data);
        cout << ", counter " << static_cast<void *>(counter);
        if (counter)
            cout << ", count = " << *counter;
        cout << endl;
    }
};

inline void swap(String &l, String &r) noexcept
{
    using std::swap;
    swap(l.size, r.size);
    swap(l.data, r.data);
    swap(l.counter, r.counter);
}

int main()
{
    String a{5};
    cout << "a: ";
    a.print();

    String b{6};
    cout << "b: ";
    b.print();
    cout << endl;

    // cout << "Calling copy constructor of c from b\n";
    // String c{b};
    // cout << "b: ";
    // b.print();
    // cout << "c: ";
    // c.print();
    // cout << endl;

    // cout << "Assigning a from c\n";
    // a = c;
    // cout << "a: ";
    // a.print();
    // cout << "c: ";
    // c.print();
    // cout << endl;
    // cout << "Exiting program...\n";

    cout << "Calling move constructor of c from b\n";
    String c{std::move(b)};
    cout << "b: ";
    b.print();
    cout << "c: ";
    c.print();
    cout << endl;

    cout << "Move assigning a from c\n";
    a = std::move(c);
    cout << "a: ";
    a.print();
    cout << "c: ";
    c.print();
    cout << endl;
    cout << "Exiting program...\n";
}
