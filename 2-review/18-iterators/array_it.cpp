#include <iostream>

using namespace std;

int main()
{
    const char str[] = {'H', 'e', 'l', 'l', 'o'};
    const char *pEnd = str + 5; // Pointer to element after last element
    const char *p = str;        // Pointer to start of array

    while (p != pEnd)
    {
        cout << *p << ", ";
        ++p;
    }
    cout << endl;
}