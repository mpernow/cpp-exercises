#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setfill('#');
    cout << left << setw(15) << "Penguins" << 5 << "\n";
    cout << setw(15) << "Polar Bears" << 2 << "\n";
    cout << setfill(' ');
}