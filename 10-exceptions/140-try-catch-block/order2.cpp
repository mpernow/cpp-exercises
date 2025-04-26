#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
    try
    {
        vector<int> v;
        cout << v.at(2) << endl;  // throws exception of type std::out_of_range
    }
    catch (const out_of_range &e)  // catches exception
    {
        cout << "std::out_of_range" << endl;
    }
    catch (const exception &e)  // not called
    {
        cout << "std::exception" << endl;
    }
}
