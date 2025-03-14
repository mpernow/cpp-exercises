#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &vec)
{
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}

int main()
{
    vector<int> vec{1, 4, 5, 6, 2, 7, 5};

    cout << "vec: ";
    print(vec);

    cout << "vec is sorted: " << boolalpha << is_sorted(cbegin(vec), cend(vec))
         << endl;

    cout << "Sorting vec";
    sort(begin(vec), end(vec));

    cout << "vec is sorted: " << boolalpha << is_sorted(cbegin(vec), cend(vec))
         << endl;
}
