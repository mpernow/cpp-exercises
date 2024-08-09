#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    cout << "Please enter a number: ";
    istream_iterator<int> ii(cin);

    int x = *ii;
    cout << "You entered " << x << endl;
}