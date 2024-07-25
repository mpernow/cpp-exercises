#include <iostream>

using namespace std;

// Function template, parameter T
template <class T> // Can use "class" or "typename"
T Max(const T &t1, const T &t2)
{
    if (t1 > t2)
        return t1;
    return t2;
}

int main()
{
    cout << Max(7.0, 2.6) << endl; // Can also write Max<double>(7.0, 2.6)
    // Template gets expanded to:
    /*
    double Max(const double& t1, const double& t2)
    {
        if (t1 > t2)
            return t1;
        return t2;
    }
    */
}