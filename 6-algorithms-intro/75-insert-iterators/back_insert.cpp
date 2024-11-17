#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    cout << "Vector has " << vec.size() << " elements" << endl;

    cout << "Calling back_inserter()\n";
    auto it = back_inserter(vec);

    cout << "Assign to insert iterator\n";
    *it = 99; // Calls vec.push_back(99)
    *it = 88; // Calls vec.push_back(88)

    cout << "Vector has " << vec.size() << " elements" << endl;

    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}