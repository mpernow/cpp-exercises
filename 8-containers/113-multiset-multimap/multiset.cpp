#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> s;
    s.insert(6);
    s.insert(7);
    s.insert(4);
    s.insert(6);
    s.insert(6);

    for (auto el : s)
        cout << el << ", ";
    cout << endl;
}
