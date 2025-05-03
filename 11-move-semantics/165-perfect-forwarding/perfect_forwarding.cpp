#include <iostream>

using namespace std;

class Test
{
};

void g(Test &x) { cout << "Modifiable version of g" << endl; }

void g(const Test &x) { cout << "Immutable version of g" << endl; }

void g(Test &&x) { cout << "Move version of g" << endl; }

template <class T> void f(T &&x) { g(std::forward<T>(x)); }

int main()
{
    Test x;
    const Test cx;

    cout << "Calling f with lvalue" << endl;
    f(x);
    cout << "\nCalling f with const lvalue" << endl;
    f(cx);
    cout << "\nCalling f with rvalue" << endl;
    f(std::move(x));
}
