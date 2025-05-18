#include <iostream>

using namespace std;

[[deprecated("A reason wy it is deprecated")]]
void func()
{
    cout << "I've been deprecated!\n";
}

int main() { func(); }
