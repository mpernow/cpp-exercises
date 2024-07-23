#include <iostream>

using namespace std;

int main()
{
    int c = 'A';
    cout << c << endl;
    cout << static_cast<char>(c) << endl; // More obvious syntax than C-style casting
}