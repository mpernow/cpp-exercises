#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

void func(const vector<int> &vec)
{
    try
    {
        cout << vec.at(2) << endl;
    }
    catch (const out_of_range &e)
    {
        cout << "Exception caught in func\n";
        cout << e.what() << endl;
        // throw exception(e);  // throw copy of same excpetion
        throw;  // rethrow
    }
}

int main()
{
    vector<int> vec;

    try
    {
        func(vec);
    }
    catch (const exception &e)
    {
        cout << "Call to func failed\n";
        cout << "Exception caught: " << e.what() << endl;
    }
}
