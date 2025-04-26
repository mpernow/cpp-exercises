#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    try
    {
        // returns nan instead of throwing error
        cout << sqrt(-1) << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
}
