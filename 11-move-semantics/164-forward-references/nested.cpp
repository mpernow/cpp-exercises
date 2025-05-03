#include <iostream>

using namespace std;

void func(int &x) { cout << "func called with argument int&" << endl; }

int main()
{
    int i{42};
    // int& &ri = i; // Error: reference to reference is illegal

    using int_ref = int &;

    int_ref j{i};
    int_ref &rj{j};

    func(rj);
}
