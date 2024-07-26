#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"orld"};
    cout << "str = " << str << endl;

    auto first = begin(str);

    str.insert(end(str), 16, 'd');

    first = begin(str); // May crash without this -- strings may be moved to new buffer after adding to them, rendering previous iterators invalid.
    str.insert(first, 'w');
    cout << "str = " << str << endl;
}