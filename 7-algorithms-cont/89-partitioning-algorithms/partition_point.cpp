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

    // Partition
    partition(begin(vec), end(vec), is_odd);

    cout << "vec: ";
    print(vec);

    // Check if it already is partitioned by oddness
    if (is_partitioned(cbegin(vec), cend(vec), is_odd))
    {
        cout << "Vector is partitioned by oddness\n";

        auto ppoint = partition_point(cbegin(vec), cend(vec), is_odd);
        if (ppoint != cend(vec))
        {
            cout << "The partition point is an element with value " << *ppoint;
            cout << " which is at index " << distance(cbegin(vec), ppoint)
                 << endl;
        }
    }
    else
        cout << "Vector is not partitioned by oddness\n";
}
