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

    vector<int> vec2;
    // Double each element in vec and place it in vec2
    transform(cbegin(vec), cend(vec), back_inserter(vec2),
              [](int n) { return 2 * n; });

    cout << "vec2: ";
    print(vec2);
}
