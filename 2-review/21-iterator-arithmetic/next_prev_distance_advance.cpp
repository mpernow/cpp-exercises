#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Hello"};

    cout << "str: " << str << endl;
    cout << "Number of elements: " << distance(begin(str), end(str)) << endl;

    auto second = next(begin(str));

    if (second != end(str))
        cout << "Second element is " << *second << endl;

    auto last = prev(end(str));

    if (last != end(str))
        cout << "Last element is " << *last << endl;

    auto mid = begin(str);
    advance(mid, distance(begin(str), end(str)) / 2);

    if (mid != end(str))
    {
        cout << "Middle element is " << *mid;
        cout << " with index " << distance(str.begin(), mid) << endl;
    }
}