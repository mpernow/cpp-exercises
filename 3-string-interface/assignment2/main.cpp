#include <iostream>
#include "exclaim.h"

using namespace std;

int main()
{
    string test_str{"To be, or not to be, that is the question:"};
    cout << "test_str: " << test_str << endl;

    cout << "exclaim(test_str): " << exclaim(test_str) << endl;

    cout << "Original: " << test_str << endl;
}