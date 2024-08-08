#include <iostream>

using namespace std;

int main()
{
    int x{0};

    cout << "Please enter a number: ";
    cin >> x;

    if (cin.good())
        cout << "You entered the number " << x << endl;
    else if (cin.fail()) // Not an int, probably user error.
        cout << "Please try again and enter a number." << endl;
    else if (cin.bad())
        cout << "Something has gone wrong." << endl;
}