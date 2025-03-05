#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string keys{"qwertyuiopasdfghjkl"};
    string dest(5, ' ');
    cout << "keys: " << keys << endl;

    // Sort as many characters that fit into dest
    partial_sort_copy(cbegin(keys), cend(keys), begin(dest), end(dest));

    cout << "First 5 characters of dest are: " << dest.substr(0, 5) << endl;
    cout << "Full keys string: " << keys << endl;
}
