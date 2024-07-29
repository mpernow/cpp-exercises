#include <iostream>
#include <string>

using namespace std;

void print(const char *arr, size_t size)
{
    // C-style function
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    string str{"Hello"};

    print(str.data(), str.size());
}