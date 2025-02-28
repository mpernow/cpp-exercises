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

    // Replace all even numbers with 6's
    replace_if(begin(vec), end(vec), [](int n) { return (n % 2 == 0); }, 6);

    cout << "Updated vec: ";
    print(vec);
}
