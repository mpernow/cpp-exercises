// Rule of three:
// If a class needs one of
//      - Copy constructor
//      - Assignment operator
//      - Destructor
// then it probably needs all three
#include <iostream>
#include <string>

using namespace std;

class String
{
    char *data;
    int size;

public:
    // Constructor
    String(const string &s) : size(s.size())
    {
        data = new char[size]; // Allocate heap memory for data
        for (int i = 0; i < size; ++i)
        { // Populate data
            data[i] = s[i];
        }
    }

    // Synthesized member functions would look like this:
    // String(const String& arg) : size(arg.size), data(arg.data) {}
    // String& operator=(const String& arg) { size = arg.size; data = arg.data; return *this; }

    // Need to define deep copy constructor to make it hold its own memory, so destructor does not try to delete the same memory twice
    String(const String &arg) : size(arg.size)
    {
        cout << "Calling copy constructor" << endl;
        data = new char[size]; // Allocate new memory

        for (int i = 0; i < size; ++i)
        {
            data[i] = arg.data[i];
        }
    }

    // Need to define deep assignment constructor for same reason as the need for deep copy
    String &operator=(const String &arg)
    {
        // Need to release original memory
        // Check for self assignment
        cout << "Calling assignment operator" << endl;
        if (&arg != this)
        {
            delete[] data;
            data = new char[arg.size];

            size = arg.size;

            for (int i = 0; i < size; ++i)
            {
                data[i] = arg.data[i];
            }
        }
        return *this;
    }

    // Destructor
    ~String()
    {
        cout << "Calling destructor" << endl;

        delete[] data; // Release heap memory for data
    }

    int length()
    {
        return size;
    }
};

int main()
{
    String str("1"s);
    String str2("Two"s);
    String str3(str2); // Calls copy constructor

    cout << "Str2 size: " << str2.length() << endl;
    cout << "Str2 size: " << str3.length() << endl;

    str2 = str3;
    cout << "Str2 size: " << str2.length() << endl;

    cout << "Str size: " << str.length() << endl;

    // Destructors called in reverse order of constructing
}