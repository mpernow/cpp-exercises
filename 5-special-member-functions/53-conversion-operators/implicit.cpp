#include <iostream>
#include <string>

using namespace std;

class Test
{
    int i{42};
    string str;

public:
    operator int() const { return i; }
};

int main()
{
    Test test;
    int x = test + 5;
    cout << test << endl; // Calls test.operator int()
    cout << x << endl;
}