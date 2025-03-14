#include <array>
#include <iostream>

using namespace std;

int main()
{
    array<int, 5> arr{1, 2, 3, 4, 5};

    cout << "arr[3] = " << arr[3] << endl;

    arr[2] = 6;
    cout << "arr[2] = " << arr[2] << endl;
}
