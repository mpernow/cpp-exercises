#include <iostream>

using namespace std;

class Vehicle
{
    int max_speed;

  public:
    Vehicle(int max_speed) : max_speed(max_speed)
    {
        cout << "Vehicle constructor called\n";
    }
};

class Aeroplane : public Vehicle
{
    int max_height;

  public:
    Aeroplane(int max_speed, int max_height)
        : Vehicle(max_speed), max_height(max_height)
    {
        cout << "Aeorplace constructor called\n";
    }
};

int main()
{
    cout << "Creating Vehicle object\n";
    Vehicle vehicle(10);
    cout << "Creating aeroplane object\n";
    Aeroplane aeroplane(40000, 500);
}
