#include <iostream>

using namespace std;

class Test
{
};

template <class T> void func(T &&x) { cout << "func called" << endl; }

int main()
{
    Test t;
    Test &rt{t};

    // T is Test& and x is T&& => Test&&
    // Compiler instantiates func(Test& x)
    func(t);

    // T is Test& and x is T&& => Test&
    // Compiler instantiates func(Test& x)
    func(rt);

    // T is Test and x it T&& => Test&&
    // Compiler instantiates func(Test&& x)
    func(std::move(t));
}
