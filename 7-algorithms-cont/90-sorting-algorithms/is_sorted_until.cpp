#include <algorithm>
#include <ios>
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
    vector<int> vec{1, 4, 5, 6, 2, 7, 5};

    cout << "vec: ";
    print(vec);

    auto el = is_sorted_until(cbegin(vec), cend(vec));
    if (el != cend(vec))
    {
        cout << "The first " << distance(cbegin(vec), el)
             << " elements are sorted" << endl;
        cout << "The first element that is not sorted has value " << *el
             << endl;
    }
    else
    {
        cout << "Could not find an initial sequence that is sorted." << endl;
    }
}
