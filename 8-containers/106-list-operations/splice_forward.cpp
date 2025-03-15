#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> list1{1, 12, 6, 24};
    forward_list<int> list2{9, 3, 14};

    cout << "list1: ";
    for (auto el : list1)
        cout << el << ", ";
    cout << endl;

    cout << "list2: ";
    for (auto el : list2)
        cout << el << ", ";
    cout << endl;

    auto p = begin(list1);
    list1.splice_after(p, list2);  // for singly linked list, splice after

    cout << "After splce: " << endl;
    cout << "list1: ";
    for (auto el : list1)
        cout << el << ", ";
    cout << endl;

    cout << "list2: ";
    for (auto el : list2)
        cout << el << ", ";
    cout << endl;
}
