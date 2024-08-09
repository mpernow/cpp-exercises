#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    ostringstream ostr;
    string text;

    cout << "Please enter a word\n";
    cin >> text;
    ostr << setw(16) << text;
    cout << "Please enter another word\n";
    cin >> text;
    ostr << setw(12) << text;

    cout << ostr.str() << endl;
}