#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str{"Hello world"};
    cout << "String to search: " << str << endl;

    string sub{"wo"};
    cout << "Searching for substring " << sub << endl;

    // Get iterator to first element of substring
    auto pos = search(cbegin(str), cend(str), cbegin(sub), cend(sub));

    if (pos != cend(str))
    {
        cout << "Found substring " << sub << " starting at index " << distance(cbegin(str), pos) << endl;
    }
    else
    {
        cout << "No match found" << endl;
    }
}
