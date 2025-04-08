#include <iostream>

using namespace std;

class Vehicle
{
  public:
    void accelerate() { cout << "Increasing speed\n"; }
};

class Aeroplane : public Vehicle
{
  public:
    void accelerate(int height)
    {
        cout << "Accelerating at a height of: " << height << endl;
    }
    void accelerate()
    {
        Vehicle::accelerate();
    }  // Define this function signature by hand
};

int main()
{
    Aeroplane plane;
    plane.accelerate(1000);
    plane.accelerate();
}
