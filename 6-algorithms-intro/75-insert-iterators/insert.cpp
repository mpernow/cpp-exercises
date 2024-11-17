#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};

    // Print out vector elements
    cout << "Vector: ";
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;

    auto el2 = next(begin(vec)); // Get iterator to second element

    auto it = inserter(vec, el2);

    *it = 99; // Calls vec.insert(el2, 99)

    cout << "Vector after insert: ";
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;

    // Not safe to use iterator again since internal changes may have been made to vec
    cout << "Data at el2: ";
    cout << *el2 << endl;
}