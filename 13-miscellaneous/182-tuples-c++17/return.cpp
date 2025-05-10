#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<double, int, string> func()
{
    tuple tup{1.0, 2, "Three"s};
    return tup;
}

int main()
{
    auto [d, i, str] = func();
    cout << "Elements of returned tuple: " << d << ", " << i << R"(, ")" << str
         << R"(")" << endl;
}
