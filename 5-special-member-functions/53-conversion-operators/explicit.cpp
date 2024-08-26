#include <iostream>
#include <string>

using namespace std;

class Test
{
    int i{42};
    string str;

public:
    explicit operator int() const { return i; }
    explicit operator bool() const { return i; }
};

int main()
{
    Test test;
    // cout << test << endl; // Error: no operator matches these operands
    cout << static_cast<int>(test) << endl;

    if (test)
        // Allowed because implicit casting to bool inside conditionals is allowed
        cout << "This is allowed!" << endl;
}