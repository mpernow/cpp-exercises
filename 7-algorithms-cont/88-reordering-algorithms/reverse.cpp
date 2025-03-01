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
    vector<int> vec{3, 1, 4, 1, 5, 9};

    cout << "Original vector: ";
    print(vec);

    reverse(begin(vec), end(vec));

    cout << "Reversed vector: ";
    print(vec);
}
