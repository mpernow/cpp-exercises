#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string keys{"qwertyuiopasdfghjkl"};
    cout << "keys: " << keys << endl;

    auto it = begin(keys) + 3;

    // Get the 4th in a sorted version of keys
    nth_element(begin(keys), it, end(keys));

    cout << "Fourth key in sorted order: " << *it << endl;
    // The keys string is not sorted
    cout << "Full keys string: " << keys << endl;
}
