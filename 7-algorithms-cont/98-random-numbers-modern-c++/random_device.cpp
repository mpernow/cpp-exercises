#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;  // Note: this does not actually use hardware entropy if
                       // using GNU C++
    mt19937 mt(rd());  // Create engine for Mersenne-Twister 19937 PRNG using
                       // random seed

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
