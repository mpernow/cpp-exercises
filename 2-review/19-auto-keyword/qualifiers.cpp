#include <iostream>

using namespace std;

int main()
{
    const int &x{6};
    auto y = x; // const qualifier ignored
    // const auto& y = x; // Produces error: Cannot modify const
    ++y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}