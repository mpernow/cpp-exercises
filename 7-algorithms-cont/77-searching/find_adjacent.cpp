#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str{"Hello world"};
    cout << "String to search: " << str << endl;

    // Get iterator to first adjacent element
    auto pos = adjacent_find(cbegin(str), cend(str));

    if (pos != cend(str))
    {
        cout << "Found adjacent element with value " << *pos << " at index " << distance(cbegin(str), pos) << endl;
    }
}