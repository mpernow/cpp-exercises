#include <iostream>

using namespace std;

int main()
{
    pair p(1, 3.142);

    auto [i, d] = p;  // structured bindings, requires C++17

    cout << "i = " << i << ", d = " << d << endl;
}
