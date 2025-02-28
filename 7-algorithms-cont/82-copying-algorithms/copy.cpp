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

    // Copy elements from one vector to another
    vector<int> vec2(vec.size());
    copy(cbegin(vec), cend(vec), begin(vec2));

    cout << "vec2: ";
    print(vec2);

    // Using an insert iterator to populate empty container
    vector<int> vec3;
    copy(cbegin(vec), cend(vec), back_inserter(vec3));

    cout << "vec3: ";
    print(vec3);

    // Using a good old fashioned loop
    vector<int> vec4;
    for (auto v : vec)
        vec4.push_back(v);

    cout << "vec4: ";
    print(vec4);
}
