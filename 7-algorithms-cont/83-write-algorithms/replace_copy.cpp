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

    vector<int> vec2;

    // Replace all 1's with 2's in new vector
    replace_copy(cbegin(vec), cend(vec), back_inserter(vec2), 1, 2);

    cout << "New vec: ";
    print(vec2);
}
