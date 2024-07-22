#include <iostream>

using namespace std;

int main()
{
    int i{1};                        // Stack variable
    int *p1 = &i;                    // Pointer to int, value is address of i
    cout << "p1 = " << p1 << endl;   // Prints address of i
    cout << "*p1 = " << *p1 << endl; // Prints value of i

    int *p2 = new int;     // Heap variable with default value (remains until released or program exits)
    int *p3 = new int{36}; // Heap variable with value 36
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
}