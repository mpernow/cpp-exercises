#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;
using namespace literals;

int main()
{
    seconds sec1 = 1h;
    cout << "sec1 = " << sec1.count() << " seconds" << endl;

    // seconds sec2 = 5043ms; // Error - would lead to loss of data

    seconds s = duration_cast<seconds>(5043ms);
    cout << "5043ms converted to " << s.count() << " seconds" << endl;

    seconds s2 = duration_cast<seconds>(-5043ms);
    cout << "-5043ms converted to " << s2.count() << " seconds" << endl;
}
