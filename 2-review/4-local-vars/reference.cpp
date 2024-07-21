#include <iostream>

using namespace std;

void func(int &y)
{
    cout << "Address of y is " << &y << endl;
    y = 1;
}

int main()
{
    int x = 2;
    cout << "Address of x is " << &x << endl;
    func(x);
    cout << "After calling func(), x is " << x << endl;
}