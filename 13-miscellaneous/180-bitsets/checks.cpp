#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    bitset<8> b1{"10101110"};

    cout << "b1 = " << b1 << endl;

    bitset<8> b2;
    b2.set();
    cout << "b2 = " << b2 << endl;

    bitset<8> b3;
    b3.reset();
    cout << "b3 = " << b3 << endl << endl;

    cout << boolalpha << "Are all bits set?" << endl;
    cout << "b1: " << b1.all() << endl;
    cout << "b2: " << b2.all() << endl;
    cout << "b3: " << b3.all() << endl << endl;

    cout << boolalpha << "Are any bits set?" << endl;
    cout << "b1: " << b1.any() << endl;
    cout << "b2: " << b2.any() << endl;
    cout << "b3: " << b3.any() << endl << endl;

    cout << boolalpha << "Are no bits set?" << endl;
    cout << "b1: " << b1.none() << endl;
    cout << "b2: " << b2.none() << endl;
    cout << "b3: " << b3.none() << endl << endl;

    cout << "Number of bits set" << endl;
    cout << "b1: " << b1.count() << endl;
    cout << "b2: " << b2.count() << endl;
    cout << "b3: " << b3.count() << endl << endl;
}
