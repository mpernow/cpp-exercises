#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;
using namespace literals;

int main()
{
    seconds s;
    cout << "Uninitialized seconds variable has value " << s.count() << endl;

    auto hour = 5h;
    auto mins = 10min;
    auto sec = 2s;
    auto msec = 20ms;
    auto usec = 50us;
    auto nsec = 80ns;

    cout << "hour = " << hour.count() << " hours" << endl;
    cout << "mins = " << mins.count() << " minutes " << endl;
    cout << "sec = " << sec.count() << " seconds " << endl;
    cout << "msec = " << msec.count() << " milliseconds " << endl;
    cout << "usec = " << usec.count() << " microseconds " << endl;
    cout << "nsec = " << nsec.count() << " nanoseconds " << endl;
}
