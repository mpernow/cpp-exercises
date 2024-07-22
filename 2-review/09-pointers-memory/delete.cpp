#include <iostream>

using namespace std;

void badfunc()
{
    int *p4 = new int{42};
    delete p4; // Release memory
    *p4 = 99;  // Undefined behaviour
    return;    // No memory leak
}

int main()
{
    int i{1};
    int *p1 = &i;
    cout << "p1 = " << p1 << endl;
    cout << "*p1 = " << *p1 << endl;

    int *p2 = new int;
    int *p3 = new int{36};

    badfunc();
}