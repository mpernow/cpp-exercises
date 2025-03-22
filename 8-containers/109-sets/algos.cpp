#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

void print(const set<int> &s)
{
    for (auto el : s)
        cout << el << ", ";
    cout << endl;
}

int main()
{
    set<int> s;
    s.insert(6);
    s.insert(7);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    print(s);

    auto it = find_if(cbegin(s), cend(s), [](int n) { return n == 7; });

    if (it != s.end())
        cout << "The set has an element with key " << *it << endl;
    else
        cout << "The set has no element with key 7" << endl;

    auto n = count_if(cbegin(s), cend(s), [](int n) { return n == 7; });
    if (n == 1)
        cout << "The set has 1 element with key 7" << endl;
    else
        cout << "The set has no elements with key 7" << endl;
}
