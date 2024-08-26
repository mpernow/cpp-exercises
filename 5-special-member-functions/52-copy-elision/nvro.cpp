#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Default constructor\n"; }
    Test(const Test &other) { cout << "Copying\n"; }
};

// Function returning a temporary object
Test func()
{
    Test test;
    return test; // Copying expected here unless elided
}

int main()
{
    cout << "Calling func()" << endl;
    Test test = func();
    // Without elision, expect two outputs of "Copying":
    // - Copying into function's return space
    // - Copy initialization of the variable test
    cout << "Returned from func()" << endl;
}