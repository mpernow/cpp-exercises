#include <iostream>
#include <queue>

using namespace std;

void print(const priority_queue<int> &pq)
{
    cout << "The queue is " << (pq.empty() ? "" : "not") << " empty\n";
    cout << "The queue contains " << pq.size() << " elements\n";
    cout << "The highest priority element is " << pq.top() << endl;
}

int main()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(5);
    pq.push(1);

    print(pq);

    cout << "\nAdding an element with value 2" << endl;
    pq.push(2);
    print(pq);

    cout << "\nRemoving the top element" << endl;
    pq.pop();
    print(pq);
}
