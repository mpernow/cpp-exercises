#include <iostream>

using namespace std;

int main()
{
    cout << "Allocating memory for array" << endl;
    int *pa = new int[20];

    cout << "Populating array" << endl;
    for (int i = 0; i < 20; ++i)
    {
        pa[i] = i;
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < 21; ++i) // Reading element after array's memory, unknown value
    {
        cout << pa[i] << ", ";
    }
    cout << endl;

    cout << "Releasing array's memory" << endl;
    delete[] pa; // Delete for arrays

    // delete pa;  // Wrong delete for array, undefined behaviour

    cout << "Finished" << endl;
}