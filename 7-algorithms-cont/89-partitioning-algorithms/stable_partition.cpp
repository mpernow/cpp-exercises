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
    vector<int> vec{3, 1, 4, 1, 5, 9, 2, 8, 6};

    cout << "vec: ";
    print(vec);

    // Partition by oddness: move all odd elements to the front
    // stable_partition keeps the order within groups
    stable_partition(begin(vec), end(vec), [](int n) { return n % 2 == 1; });

    cout << "Partitioned vector: ";
    print(vec);
}
