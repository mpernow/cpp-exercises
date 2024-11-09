#include <iostream>

using namespace std;

int main()
{
    int z = 1;
    auto add_z_plus1 = [y = z + 1](int x)
    { return x + y; };

    cout << "Calling add_z_plus1(2) gives " << add_z_plus1(2) << endl;
    cout << "Calling add_z_plus1(5) gives " << add_z_plus1(5) << endl;
}