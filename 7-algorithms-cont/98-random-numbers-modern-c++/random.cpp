#include <iostream>
#include <random>

using namespace std;

int main()
{
    mt19937 mt;  // Create engine for Mersenne-Twister 19937 PRNG

    uniform_int_distribution<int> idist(0, 10);  // ints in the range 0 to 10

    cout << "Five random integers between 0 and 10:\n";
    for (int i = 0; i < 5; ++i)
        cout << idist(mt) << ", ";
    cout << endl;

    uniform_real_distribution<double> fdist(
        0, 10);  // doubles in the rande 0 to 10

    cout << "Five random doubles between 0 and 10:\n";
    for (int i = 0; i < 5; ++i)
        cout << fdist(mt) << ", ";
    cout << endl;
}
