#include <iostream>
#include <random>

using namespace std;

int main()
{
    default_random_engine eng;  // create engine object - generates a sequence

    cout << "Five random integers: \n";
    for (int i = 0; i < 5; ++i)
        cout << eng() << ", ";  // Call functor
    cout << endl;
}
