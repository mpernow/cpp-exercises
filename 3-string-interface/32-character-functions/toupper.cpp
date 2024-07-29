#include <iostream>
#include <cctype>

using namespace std;

// Return true if input starts with 'y' or 'Y'
bool yes_or_no(const string &input)
{
    char c = input[0];

    if (toupper(c) == 'Y')
    {
        return true;
    }
    return false;
}

int main()
{
    string input;
    cout << "Do you want to enter a string that starts with 'y' or 'Y'?" << endl;
    cin >> input;

    if (yes_or_no(input))
        cout << "Evidently you do!" << endl;
    else
        cout << R"(I will take that as a "no"!)" << endl;
}