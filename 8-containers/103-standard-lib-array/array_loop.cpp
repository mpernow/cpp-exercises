#include <array>
#include <iostream>

using namespace std;

int main()
{
    array<int, 5> arr{1, 2, 3, 4, 5};

    cout << "Iterator loop: ";
    for (auto it = begin(arr); it != end(arr); ++it)
    {
        cout << *it << ", ";
    }
    cout << endl;

    cout << "Range-for loop: ";
    for (auto el : arr)
    {
        cout << el << ", ";
    }
    cout << endl;

    cout << "Indexed loop: ";
    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;

    array<int, 5> five_ints;
    five_ints = arr;

    cout << "Elements after assignment: ";
    for (auto el : five_ints)
    {
        cout << el << ", ";
    }
    cout << endl;
}
