#include <iostream>

using namespace std;

class Vehicle
{
  public:
    void start() { cout << "Engine started "; }
};

class Aeroplane : public Vehicle
{
  public:
    void start()  // Reimplement start()
    {
        cout << "Carrying out checks...\n";
        cout << "Ready for takeoff!\n";
    }
};

int main()
{
    Aeroplane plane;
    plane.start();
    cout << endl;
}
