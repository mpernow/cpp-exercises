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
    catch (const exception &e)  // will catch all
    {
        cout << "std::exception" << endl;
    }
    catch (const out_of_range &e)  // does not catch
    {
        cout << "std::out_of_range" << endl;
    }
}
