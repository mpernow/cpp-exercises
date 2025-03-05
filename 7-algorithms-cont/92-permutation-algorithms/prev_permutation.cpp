#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"abc"};

    cout << "The permutations of " << str << " in reverse order are: " << endl;

    // First sort the string in reverse order
    sort(begin(str), end(str), [](int m, int n) { return m > n; });

    // Loop to print permutations
    do
    {
        cout << str << endl;
    } while (prev_permutation(begin(str), end(str)));
}
