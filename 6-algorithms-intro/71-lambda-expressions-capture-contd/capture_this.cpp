#include <iostream>

using namespace std;

class Test
{
    int time{10};

public:
    void countdown()
    {
        // Capture the class object (always by reference)
        [this]()
        {
            if (time > 0)
                cout << time << endl;
            else if (time == 0)
                cout << "Liftoff!" << endl;
            --time;
        }(); // Call the lambda function
    }
};

int main()
{
    Test test;
    for (int i = 0; i < 12; ++i)
        test.countdown();
}