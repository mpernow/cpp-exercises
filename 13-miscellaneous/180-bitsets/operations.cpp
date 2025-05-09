#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    bitset<8> b1{"10101110"};
    bitset<8> b2{0b010'1110};

    cout << "b1 is " << b1 << endl;
    cout << "~b1 is " << ~b1 << endl;
    cout << "b2 is " << b2 << endl;

    cout << "b1 & b2 is " << (b1 & b2) << endl;
    cout << "b1 | b2 is " << (b1 | b2) << endl;
    cout << "b1 ^ b2 is " << (b1 ^ b2) << endl;

    cout << "b1 << 4 is " << (b1 << 4) << endl;
    cout << "b2 >> 2 is " << (b2 >> 2) << endl;
}
