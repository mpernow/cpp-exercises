#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 2, 3, 2, 2, 2, 3, 3};

    // Find sequence of three elements with value 2
    auto pos = search_n(cbegin(vec), cend(vec), 3, 2);

    if (pos != cend(vec))
    {
        cout << "Found three elements with value " << *pos << " at index " << distance(cbegin(vec), pos) << endl;
    }
}