#include <iostream>

using namespace std;

class Vehicle
{
  public:
    void start() { cout << "Engine started "; }
};

class Aeroplane : public Vehicle
{
    // start is inherited from Vehicle
};

int main()
{
    Aeroplane plane;
    plane.start();
    cout << endl;
}
