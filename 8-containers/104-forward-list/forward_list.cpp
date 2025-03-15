#include <forward_list>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    // forward_list is same as a singly linked list
    forward_list<int> l{4, 3, 1};

    cout << "Initial elements in list: " << endl;
    for (auto el : l)
        cout << el << ", ";
    cout << endl;

    // To insert an element, need to have an iterator to the previous element
    auto second = l.begin();
    advance(second, 1);
    l.insert_after(second, 2);

    cout << "Elements after inserting: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;

    // Remove element we added
    l.erase_after(second);

    cout << "Elements after erasing: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;
}
