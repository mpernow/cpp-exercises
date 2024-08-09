#include <iostream>

using namespace std;

int main()
{
    double c{299'792'458};
    cout << fixed << c << endl;
    double e{1.602e-19};
    cout << fixed << e << endl; // Truncated - displays 0.000000
}