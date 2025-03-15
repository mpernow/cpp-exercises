#include <iostream>
#include <list>

using namespace std;

int main()
{
    // list is a doubly linked list
    list<int> l{4, 3, 1};

    cout << "Initial elements: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;

    auto last = end(l);
    advance(last, -1);
    auto two = l.insert(last, 2);  // insert before

    cout << "Elements after insert: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;

    l.erase(two);

    cout << "Elements after erase: ";
    for (auto el : l)
        cout << el << ", ";
    cout << endl;
}
