#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Test
{
    int i{42};
    string str{"Hello"s};

public:
    // Member function to print to any output stream
    // Pass output stream by reference since it will be modified in function
    void print(ostream &os) const
    {
        os << "i = " << i << ",  str = " << str << endl;
    }
};

int main()
{
    Test test;
    test.print(cout);

    ofstream ofile("test.txt");

    if (!ofile.is_open())
    {
        cout << "could not open test.txt" << endl;
        return -1;
    }

    test.print(ofile);
}
