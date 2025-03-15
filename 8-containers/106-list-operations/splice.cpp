#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list1{1, 12, 6, 24};
    list<int> list2{9, 3, 14};

    cout << "list1: ";
    for (auto el : list1)
        cout << el << ", ";
    cout << endl;

    cout << "list2: ";
    for (auto el : list2)
        cout << el << ", ";
    cout << endl;

    auto p = begin(list1);
    advance(p, 1);           // iterator to second element of list1
    list1.splice(p, list2);  // insert elements of list2 before p

    cout << "After splice: " << endl;
    cout << "list1: ";
    for (auto el : list1)
        cout << el << ", ";
    cout << endl;

    cout << "list2: ";
    for (auto el : list2)
        cout << el << ", ";
    cout << endl;
}
