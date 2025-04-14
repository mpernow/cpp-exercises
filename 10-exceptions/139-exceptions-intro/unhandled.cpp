#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    // cout << vec[2] << endl;     // Undefined behaviour
    cout << vec.at(2) << endl;  // Error condition
    cout << "Finished!\n";
}
