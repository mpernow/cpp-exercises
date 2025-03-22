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

    auto ret = s.insert(3);
    if (ret.second)
        cout << "Added element with key 3" << endl;
    else
        cout << "Set already contains element with key " << *(ret.first)
             << endl;

    print(s);

    s.erase(3);
    print(s);

    auto ret2 = s.insert(3);
    if (ret2.second)
        cout << "Added element with key 3" << endl;
    else
        cout << "Set already contains element with key " << *(ret2.first)
             << endl;
}
