#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};

    cout << "Vector elements: " << endl;
    for (auto el : vec) // Gives const
        cout << el << ", ";

    cout << endl
         << "Adding 2 to each element" << endl;
    for (auto &el : vec) // Get reference to not habe const
        el += 2;

    cout << endl
         << "Modified vector elements: " << endl;
    for (auto el : vec)
        cout << el << ", ";
    cout << endl;
}