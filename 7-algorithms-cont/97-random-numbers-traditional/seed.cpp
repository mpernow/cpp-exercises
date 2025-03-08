#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    // Seed with current time -- need to wait at least one second between runs
    srand(time(0));

    // Print a pseudo-random number between 0 and 1
    cout << 1.0 * rand() / RAND_MAX
         << endl;  // Note the conversion to floating point before division!

    // Print out 10 random numbers between 1 and 100
    for (int i = 0; i < 10; ++i)
        cout << static_cast<int>(99.0 * rand() / RAND_MAX + 1) << endl;
    // Note: always produces the same results. Need to seed to get different
    // ones.
}
