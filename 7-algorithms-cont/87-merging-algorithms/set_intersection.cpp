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
    vector<int> vec1{3, 1, 4, 1, 5, 9};
    vector<int> vec2{3, 1, 4, 2, 8};

    sort(begin(vec1), end(vec1));
    cout << "vec1: ";
    print(vec1);

    sort(begin(vec2), end(vec2));
    cout << "vec2: ";
    print(vec2);

    vector<int> vec3;
    // Place set intersection of vec1 and vec2 in vec3
    set_intersection(cbegin(vec1), cend(vec1), cbegin(vec2), cend(vec2),
                     back_inserter(vec3));

    cout << "Result of merging: ";
    print(vec3);
}
