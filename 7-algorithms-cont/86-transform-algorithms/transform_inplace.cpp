#include <algorithm>
#include <iostream>
#include <iterator>
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
    vector<int> vec{3, 1, 4, 1, 5, 9};

    cout << "vec: ";
    print(vec);

    // transform allows inplace transformation
    // Double each element in vec in place
    transform(begin(vec), end(vec), begin(vec), [](int n) { return 2 * n; });

    cout << "vec: ";
    print(vec);
}
