#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;
using namespace literals;

int main()
{
    seconds sec;
    auto s1 = 2s;
    auto s2 = 3s;

    sec = s1 + s2;
    cout << "sec = " << sec.count() << " seconds" << endl;

    auto msec = sec + 42ms;
    cout << "msec = " << msec.count() << endl;
}
