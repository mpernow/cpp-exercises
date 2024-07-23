#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Hello"};
    string::iterator it = str.begin(); // Start at beginning of string

    while (it != str.end()) // Loop until end of string
    {
        cout << *it << ", ";
        ++it;
    }
    cout << endl;

    // Simplified with for loop
    for (string::iterator it2 = str.begin(); it2 != str.end(); ++it2)
    {
        cout << *it2 << ", ";
    }
    cout << endl;
}