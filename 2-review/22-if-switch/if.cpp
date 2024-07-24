#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};

    // Older C++
    auto iter = begin(vec);
    if (iter != end(vec))
    {
        cout << "First element of vec is: " << *iter << endl;
    }

    // After C++17: Local variables in if-statement
    if (auto iter = begin(vec); iter != end(vec))
    {
        cout << "First element of vec is: " << *iter << endl;
    }
}