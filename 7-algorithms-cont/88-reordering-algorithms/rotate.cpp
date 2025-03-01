#include <algorithm>
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
    vector<int> vec{1, 2, 3, 4, 5};

    cout << "Original vector: ";
    print(vec);

    // Pivot about third element
    auto pivot = begin(vec);
    advance(pivot, 2);

    // Perform rotation
    auto res = rotate(begin(vec), pivot, end(vec));

    cout << "Rotated vector: ";
    print(vec);

    // res is an iterator to the previously first element
    cout << "The original first element was: " << *res << endl;
}
