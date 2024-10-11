#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};

    // Pass lambda expression
    // Syntax [](arguments){expression;}
    // Compiler will generate a functor class
    auto odd_it = find_if(cbegin(vec), cend(vec), [](int n)
                          { return (n % 2 == 1); });

    if (odd_it != cend(vec))
        cout << "First odd element is: " << *odd_it << endl;
}