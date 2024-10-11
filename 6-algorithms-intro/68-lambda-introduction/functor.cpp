#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class is_odd
{
public:
    bool operator()(const int n) const { return (n % 2 == 1); }
};

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};

    // Pass functor object
    auto odd_it = find_if(cbegin(vec), cend(vec), is_odd());

    if (odd_it != cend(vec))
        cout << "First odd element is: " << *odd_it << endl;
}