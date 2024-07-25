#include <iostream>

using namespace std;

void func(int x, int y)
{
    cout << x << " + " << y << " = " << x + y << endl;
}

int main()
{
    auto func_ptr = &func;
    // auto func_ptr = func;        // The & is optional

    (*func_ptr)(1, 2);
    // func_ptr(1, 2);      // The * is optional
}