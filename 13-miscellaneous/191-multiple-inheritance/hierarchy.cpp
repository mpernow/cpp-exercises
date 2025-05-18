#include <iostream>

using namespace std;

class HardwareDevice
{
};

class TouchResponder
{
};

class Mouse : public HardwareDevice, public TouchResponder
{
};
class Keyboard : public HardwareDevice, public TouchResponder
{
};
class TouchScreen : public HardwareDevice, public TouchResponder
{
};

int main() { Mouse mouse; }
