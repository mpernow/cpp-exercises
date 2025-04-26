#include <fstream>
#include <ios>  // for I/O exceptions
#include <iostream>

using namespace std;

int main()
{
    ifstream ifile;

    // Enable exceptions for ifile
    ifile.exceptions(ifstream::failbit | ifstream::badbit);

    try
    {
        // Try to open non-existing file
        ifile.open("text.txt");
    }
    catch (const exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
}
