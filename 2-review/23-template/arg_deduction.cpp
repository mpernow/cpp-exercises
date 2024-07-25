#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector vec{1, 2, 3}; // Requires C++17 to deduce parameters, otherwise need vector<int> vec{1, 2, 3};

    cout << "vec = ";
    for (auto it : vec)
    {
        cout << it << ", ";
    }
}