#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec;
    list<string> ls;
    deque<string> dq;
    list<string> ls_rev;
    deque<string> dq_rev;
    string s;

    while (getline(cin, s))
    {
        vec.push_back(s);
        ls.push_back(s);
        dq.push_back(s);

        ls_rev.push_front(s);
        dq_rev.push_front(s);
    }

    cout << "In vector: " << endl;
    for (auto s : vec)
        cout << s << ", ";
    cout << endl;

    cout << "In list: " << endl;
    for (auto s : ls)
        cout << s << ", ";
    cout << endl;

    cout << "In deque: " << endl;
    for (auto s : dq)
        cout << s << ", ";
    cout << endl;

    cout << "In reverse list: " << endl;
    for (auto s : ls_rev)
        cout << s << ", ";
    cout << endl;

    cout << "In reverse deque: " << endl;
    for (auto s : dq_rev)
        cout << s << ", ";
    cout << endl;
}
