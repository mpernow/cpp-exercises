#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};

    cout << "original vector: ";
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;

    cout << "Before calling remove(), vec has " << vec.size() << " elements."
         << endl;

    // Remove all 1's from vector
    // The unremoved values get pushed forwards, with num_removed undefined
    // elements at end
    // Returns iterator to first undefined (removed) element
    auto defunct = remove(begin(vec), end(vec), 1);

    vec.erase(defunct, end(vec));

    // Still same number of elements, but the last num_removed are undefined
    cout << "After calling remove(), vec has " << vec.size() << " elements."
         << endl;

    cout << "Result: ";
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}
