#include <iostream>

using namespace std;

void func(int x, int y)
{
    cout << x << " + " << y << " = " << x + y << endl;
}

using pfunc = void (*)(int, int);

void some_func(int x, int y, pfunc func_ptr)
{
    (*func_ptr)(x, y);
}

pfunc other_func()
{
    return func;
}

int main()
{
    auto func_ptr = other_func();

    some_func(1, 2, func_ptr);
}