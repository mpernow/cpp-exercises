#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifile;
    ifile.open("input.txt");

    int x{0};

    // Wrong - has extra iteration if file ends in empty line
    while (!ifile.eof())
    {
        ifile >> x;
        cout << x << ", ";
    }

    // Correct
    while (ifile >> x)
        cout << x << ", ";
    cout << endl;
}