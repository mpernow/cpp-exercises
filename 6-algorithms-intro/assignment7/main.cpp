#include <iostream>

using namespace std;

int main()
{
    int y = 1;
    auto test_lambda = [y = y + 1](int x)
    { return x + y; };
    cout << test_lambda(5) << endl;
    cout << y << endl;
}