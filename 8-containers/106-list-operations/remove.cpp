#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{4, 3, 1};

    cout << "Initial elements in list: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;

    // sort(begin(l), end(l)); // Does not compile
    l.sort();  // Use member function for sort

    cout << "Elements in list after sorting: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;

    l.remove(3);  // Remove element with value 3

    cout << "Elements after removing 3: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;
}
