#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    try
    {
        cout << vec.at(2) << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    cout << "Finished!\n";
}
