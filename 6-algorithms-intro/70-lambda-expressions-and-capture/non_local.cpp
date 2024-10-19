#include <iostream>

using namespace std;

int global{99};

int main()
{
    static int answer{42};
    const int one{1};
    const int &r_one{one};

    []()
    {
        cout << global << endl;
        cout << answer << endl;
        // This does not work with every compiler
        cout << one << endl;
        // Lambda function cannot access local variable
        // cout << r_one << endl;
    };
}