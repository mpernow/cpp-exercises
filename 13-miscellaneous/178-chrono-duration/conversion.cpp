#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;
using namespace literals;

void func(seconds sec) { cout << sec.count() << " seconds" << endl; }

int main()
{
    // seconds sec = 2; // Error
    seconds sec = 2s;

    // func(2);  // Error
    func(2s);
}
