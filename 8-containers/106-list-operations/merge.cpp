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

    list1.sort();
    list2.sort();
    list1.merge(list2);

    cout << "After merge: " << endl;
    cout << "list1: ";
    for (auto el : list1)
        cout << el << ", ";
    cout << endl;

    cout << "list2: ";
    for (auto el : list2)
        cout << el << ", ";
    cout << endl;
}
