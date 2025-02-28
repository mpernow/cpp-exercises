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
    vector<int> vec1{3, 1, 4, 1, 5, 9};

    cout << "vec: ";
    print(vec1);

    vector<int> vec2;
    // Populate vec2 with twice the values of vec1
    transform(cbegin(vec1), cend(vec1), back_inserter(vec2),
              [](int n) { return 2 * n; });

    cout << "vec2: ";
    print(vec2);

    vector<int> vec3;
    // Add elements of vec1 and vec2 and place them in vec3
    // transform contains an overload that takes four iterators
    // assumes the same sizes of vectors vec1 and vec2
    transform(cbegin(vec1), cend(vec1), cbegin(vec2), back_inserter(vec3),
              [](int n, int m) { return m + n; });

    cout << "vec3: ";
    print(vec3);
}
