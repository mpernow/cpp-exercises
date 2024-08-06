#include <iostream>

using namespace std;

int main()
{
    cout << "Enter some text:" << endl;

    char c;
    while (cin.get(c)) // Get single character until end of input
        cout.put(c);   // Display data
}