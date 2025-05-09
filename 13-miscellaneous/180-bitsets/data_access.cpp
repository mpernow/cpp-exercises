#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    bitset<8> b1{"10101110"};   // string literal
    bitset<8> b2{0xae};         // integer - decimal or hexadecimal
    bitset<8> b3{0b1010'1110};  // binary constant (C++14)

    cout << "b1 is " << b1 << endl;
    cout << "b2 in decimal is " << b2.to_ulong() << endl;
    cout << "b2 as a string is " << b2.to_string() << endl;
    cout << "b3 is " << b3 << endl;

    cout << "b1 has " << b1.size() << " bits" << endl;

    cout << "The bits of b1 are: ";
    for (size_t i = 0; i < b1.size(); ++i)
        cout << b1[i] << ",";
    cout << endl;

    cout << "Accessing with bounds checking:" << endl;
    try
    {
        cout << "b1 bit " << 8 << " = " << b1.test(8) << endl;
    }
    catch (exception &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
}
