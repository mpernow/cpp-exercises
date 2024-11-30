#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void print_vec(const vector<int> &vec)
{
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};

    // Sort, since needed for binary search
    sort(begin(vec), end(vec));

    cout << "Sorted vector: ";
    print_vec(vec);

    if (binary_search(cbegin(vec), cend(vec), 4))
    {
        cout << "Vector contains 4" << endl;
    }
    else
    {
        cout << "Vector does not contain 4" << endl;
    }

    if (binary_search(cbegin(vec), cend(vec), 8))
    {
        cout << "Vector contains 8" << endl;
    }
    else
    {
        cout << "Vector does not contain 8" << endl;
    }
}