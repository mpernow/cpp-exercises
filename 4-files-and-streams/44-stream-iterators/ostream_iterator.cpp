#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    ostream_iterator<int> oi(cout, "\n");

    for (int i = 0; i < 10; ++i)
    {
        *oi = i; // * not strictly necessary but makes it look like other iterator code
        ++oi;    // Not necessary
    }
}