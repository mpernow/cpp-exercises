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
    auto is_odd = [](int n) { return n % 2 == 1; };

    cout << "vec: ";
    print(vec);

    // Check if it already is partitioned by oddness
    if (is_partitioned(cbegin(vec), cend(vec), is_odd))
        cout << "Vector is partitioned by oddness\n";
    else
        cout << "Vector is not partitioned by oddness\n";

    // Partition
    partition(begin(vec), end(vec), is_odd);
    // Check if it already is partitioned by oddness
    if (is_partitioned(cbegin(vec), cend(vec), is_odd))
        cout << "Vector is partitioned by oddness\n";
    else
        cout << "Vector is not partitioned by oddness\n";
}
