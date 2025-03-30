#include <ios>
#include <iostream>
#include <stack>

using namespace std;

void print(const stack<int> &s)
{
    cout << "The stack contains " << s.size() << " elements" << endl;
    cout << "The top element is " << s.top() << endl;
    cout << "The stack is empty? " << boolalpha << s.empty() << endl;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(5);

    print(s);

    cout << "\nAdding a new element:" << endl;
    s.push(3);
    print(s);

    cout << "\nRemoving the top element:" << endl;
    s.pop();
    print(s);
}
