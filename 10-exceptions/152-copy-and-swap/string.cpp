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
        String temp(arg);   // Create copy of other
        swap(*this, temp);  // Replace our data with temp's data
        return *this;       // temp is destroyed
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
    String a(5);
    cout << "a: ";
    a.print();
    String b(6);
    cout << "b: ";
    b.print();

    cout << "Copy ocnstruction of c from b\n";
    String c(b);

    cout << "b: ";
    b.print();
    cout << "c: ";
    c.print();

    cout << "Assigning a from c\n";
    a = c;
    cout << "a: ";
    a.print();
    cout << "c: ";
    c.print();

    cout << endl;
}
