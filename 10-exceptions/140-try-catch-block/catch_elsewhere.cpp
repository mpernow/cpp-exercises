#include <iostream>
#include <vector>

using namespace std;

// Function which throws
void func(const vector<int> &vec) { cout << vec.at(2) << endl; }

int main()
{
    vector<int> vec;

    try
    {
        func(vec);
    }
    catch (const exception &e)
    {
        cout << "Base exception caught\n";
        cout << "Excpetion: " << e.what() << endl;
    }
}
