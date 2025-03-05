#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print_vec(const vector<int> &vec)
{
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};
    vector<int> vec2{1, 3, 4, 5, 9, 1};

    cout << "vec: ";
    print_vec(vec);
    cout << "vec2: ";
    print_vec(vec2);

    // Do they contain the same elements in a different permutation?
    if (is_permutation(cbegin(vec), cend(vec), cbegin(vec2), cend(vec2)))
    {
        cout << "vec is a permutation of vec2" << endl;
    }
    else
    {
        cout << "vec is not a permutation of vec2" << endl;
    }
}
