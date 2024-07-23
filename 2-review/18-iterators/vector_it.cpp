#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};

    vector<int>::iterator it = vec.begin();

    while (it != vec.end())
    {
        cout << *it << ", ";
        ++it;
    }
    cout << endl;

    // Simplify using for loop
    for (vector<int>::iterator it2 = vec.begin(); it2 != vec.end(); ++it2)
    {
        cout << *it2 << ", ";
    }
    cout << endl;
}