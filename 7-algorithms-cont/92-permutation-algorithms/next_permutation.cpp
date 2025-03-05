#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"abc"};

    cout << "The permutations of " << str << " are: " << endl;

    // Loop to print permutations
    do
    {
        cout << str << endl;
    } while (next_permutation(begin(str), end(str)));
}
