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
    vector<int> vec{1, 2, 3, 4, 5};
    vector<int> vec2;

    cout << "Source vector: ";
    print(vec);

    partial_sum(cbegin(vec), cend(vec), back_inserter(vec2));

    cout << "Target vector: ";
    print(vec2);
}
