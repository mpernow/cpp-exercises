#include <iostream>
#include <numeric>
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
    vector<int> vec{1, 3, 6, 10, 15};
    vector<int> vec2;

    cout << "Source vector: ";
    print(vec);

    // This is the inverse of partial sum
    adjacent_difference(cbegin(vec), cend(vec), back_inserter(vec2));

    cout << "Target vector: ";
    print(vec2);
}
