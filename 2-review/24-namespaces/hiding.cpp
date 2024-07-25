#include <iostream>

using namespace std;

int x{23}; // Defined in global namespace

namespace abc
{
    int x{47};
    void func()
    {
        cout << "x = " << x << endl;     // Uses abc's x
        cout << "::x = " << ::x << endl; // Uses global x
    }
}

int main()
{
    abc::func();
}