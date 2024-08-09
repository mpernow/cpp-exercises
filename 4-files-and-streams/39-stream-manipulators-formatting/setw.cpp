#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left << setw(15) << "Penguins " << 5 << "\n"; // left is a sticky manipulator
    cout << setw(15) << "Polar Bears " << 2 << "\n";
}