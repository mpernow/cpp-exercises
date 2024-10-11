#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Predicate function
bool is_shorter(const string &lhs, const string &rhs)
{
    return lhs.size() < rhs.size();
}

int main()
{
    vector<string> names = {"Dilbert", "PHB", "Dogbert", "Asok", "Ted", "Alice", "Wally"};

    cout << "Vector before sort():\n";
    for (auto name : names)
        cout << name << ", ";
    cout << endl
         << endl;

    // Sort alphabetically
    sort(begin(names), end(names));

    cout << "Sorted alphabetically:" << endl;
    for (auto name : names)
        cout << name << ", ";
    cout << endl;

    // Sort by length
    sort(begin(names), end(names), is_shorter);

    cout << endl
         << "Sorted by length:" << endl;
    for (auto name : names)
        cout << name << ", ";
    cout << endl;
}