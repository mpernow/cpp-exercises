#include <iostream>

using namespace std;

int main()
{
    string names[] = {
        "Fred", "Wilma", "Pebbles", "Dino", "Barney", "Betty", "Bamm-Bamm", "Hoppy"};

    // More performant to multiply than dereference pointer
    cout << "names[1][2]" << names[1 * 4 + 2] << endl;

    cout << "\nThe elements are:" << endl;
    for (int row = 0; row < 2; ++row)
    {
        for (int col = 0; col < 4; ++col)
        {
            cout << names[row * 4 + col] << ", ";
        }
        cout << endl;
    }
}