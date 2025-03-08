#include <iostream>
#include <random>

using namespace std;

int main()
{
    static mt19937 mt;
    static bernoulli_distribution bd;

    if (bd(mt))
        cout << "yes\n";
    else
        cout << "no\n";
}
