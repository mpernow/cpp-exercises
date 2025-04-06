#include <iostream>

using namespace std;

class Vehicle
{
  public:
    void start() { cout << "Engine started " << endl; }
};

class Aeroplane : public Vehicle
{
  public:
    void start()  // Extend start()
    {
        cout << "Carrying out checks...\n";
        Vehicle::start();  // Call base class member function
        cout << "Ready for takeoff!\n";
    }
};

int main()
{
    Aeroplane plane;
    plane.start();
    cout << endl;
}
