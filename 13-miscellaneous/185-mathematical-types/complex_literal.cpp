#include <complex>
#include <iostream>

using namespace std;
using namespace std::literals;

int main()
{
    complex<double> p{1.0, 2.0};
    cout << "p = " << p << endl;

    auto s = 2i;
    cout << "s = " << s << endl;

    auto z = 3.0 + 4i;
    cout << "z = " << z << endl;

    p += 4i;
    cout << "p = " << p << endl;
}
