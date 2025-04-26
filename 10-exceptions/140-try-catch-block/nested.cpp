#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    try
    {
        try
        {
            cout << v.at(2) << endl;  // Throws exception
        }
        catch (const bad_alloc &e)
        {
            cout << "Bad alloc\n";
            cout << "Exception: " << e.what() << endl;
        }
    }
    catch (const exception &e)
    {
        cout << "Base exception\n";
        cout << "Excepetion: " << e.what() << endl;
    }
}
