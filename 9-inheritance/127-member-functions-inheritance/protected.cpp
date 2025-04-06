#include <iostream>

using namespace std;

class Vehicle
{
  protected:
    void kids_only();
};

class Aeroplane : public Vehicle
{
  public:
    void do_something()
    {
        kids_only();  // protected member function of parent}
    };
};

int main()
{
    Aeroplane plane;
    plane.do_something();

    Vehicle vehicle;
    // vehicle.kids_only(); // Not accessible
}
