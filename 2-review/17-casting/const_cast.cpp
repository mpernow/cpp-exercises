#include <iostream>

using namespace std;

void print(char *str)
{
    cout << str << endl;
}

int main()
{
    const char *msg = "Hello, world!";
    // print(msg); // Error - invalid since not const
    print(const_cast<char *>(msg)); // Makes it const
}