#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<double, int, string> func() { return {1.0, 2, "Three"s}; }

int main()
{
    double d;
    int i;
    string str;

    tie(d, i, str) = func();

    cout << "Elements of returned tuple: " << d << ", " << i << R"(, ")" << str
         << R"(")" << endl
         << R"(")" << endl;
}
