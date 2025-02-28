#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void print(const vector<int> &vec)
{
    for (auto v : vec)
    {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};

    cout << "vec: ";
    print(vec);

    // Replace all 1's with 2's
    replace(begin(vec), end(vec), 1, 2);

    cout << "Updated vec: ";
    print(vec);
}
