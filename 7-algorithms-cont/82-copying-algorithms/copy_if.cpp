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

    // Copy odd elements from one vector to another
    vector<int> vec2;
    copy_if(cbegin(vec), cend(vec), back_inserter(vec2),
            [](int n) { return n % 2 == 1; });

    cout << "vec2: ";
    print(vec2);

    // Using a good old fashioned loop
    vector<int> vec3;
    for (auto v : vec)
        if (v % 2 == 1)
            vec3.push_back(v);

    cout << "vec3: ";
    print(vec3);
}
