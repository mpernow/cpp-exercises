#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // Can use non-member function begin() and end(). Need it for arrays since they don't have member functions
    cout << "Iterator: ";
    for (auto it = begin(arr); it != end(arr); ++it)
        cout << *it << ", ";

    cout << endl
         << "Const iterator: ";
    for (auto it = cbegin(arr); it != cend(arr); ++it)
        cout << *it << ", ";

    cout << endl
         << "Reverse iterator: ";
    for (auto it = rbegin(arr); it != rend(arr); ++it)
        cout << *it << ", ";

    cout << endl
         << "Const reverse iterator: ";
    for (auto it = crbegin(arr); it != crend(arr); ++it)
        cout << *it << ", ";

    cout << endl;
}