#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int x{0};

    cout << "Please enter a number: ";
    cin >> x;

    bool success{false};
    while (!success)
    {
        if (cin.good())
        {
            cout << "You entered the number " << x << endl;
            success = true;
        }
        else if (cin.fail())
        {
            cout << "Please try again and enter a number: ";
            cin.clear();
            // Unfortunately, there is no flush() for cin
            // cin.ignore(20, '\n'); // Remove next 20 characters or everything up to next newline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> x;
        }
    }
}