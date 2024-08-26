#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Default constructor\n"; }
    Test(const Test &other) { cout << "Copying\n"; }
};

// Function taking argument by value
void func(Test test)
{
    // Do something
}

int main()
{
    cout << "Calling func()" << endl;
    func(Test());
    // Without elision, expect one output of "Copying":
    // - Copy into function's space
    cout << "Returned from func()" << endl;
}