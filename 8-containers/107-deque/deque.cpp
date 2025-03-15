#include <deque>
#include <iostream>

using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(5);
    dq.push_back(1);
    dq.push_front(3);
    dq.push_front(2);
    dq.push_front(4);

    for (auto it : dq)
        cout << it << ", ";
    cout << endl;
}
