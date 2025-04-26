#include <iostream>

using namespace std;

int main()
{
    try
    {
        throw 42;
        // Anything can be thrown here
        // An exception could also be thrown
    }
    catch (...)
    {
        // This will catch anything thrown, whether it is an exception or not
        cout << "Caught an exception of unknown type\n";
    }
}
