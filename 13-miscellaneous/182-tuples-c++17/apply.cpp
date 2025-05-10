#include <iostream>
#include <string>
#include <tuple>

using namespace std;

void func(int i, double d, string str)
{
    cout << "i = " << i << ", d = " << d << ", str = " << str << endl;
}

int main() { apply(func, tuple(1, 2.0, "Three"s)); }
