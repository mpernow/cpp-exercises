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

    // Replace all even numbers with 6's in new vector
    replace_copy_if(
        cbegin(vec), cend(vec), back_inserter(vec2),
        [](int n) { return (n % 2 == 0); }, 6);

    cout << "New vec2: ";
    print(vec2);
}
