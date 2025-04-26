#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

int at(const vector<int> &vec, int pos)
{
    if (vec.size() < pos + 1)
    {
        string str{"No element at index "s + to_string(pos)};
        throw out_of_range(str);
    }

    return vec[pos];
}

int main()
{
    // vector<int> vec{1, 2, 3};
    vector<int> vec;

    try
    {
        int el = at(vec, 2);
        cout << "vec[2] = " << el << endl;
    }
    catch (const exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
}
