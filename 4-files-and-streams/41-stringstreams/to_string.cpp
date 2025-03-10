#include <iostream>
#include <sstream>

using namespace std;

template <typename T>
string To_string(const T &t)
{
    ostringstream os;
    os << t;
    return os.str();
}

int main()
{
    string hello{"Hello, "};
    string pi{To_string(3.14159)};
    hello += pi;
    cout << hello << endl;
}