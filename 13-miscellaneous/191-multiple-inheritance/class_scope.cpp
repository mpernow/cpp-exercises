#include <iostream>

using namespace std;

struct Params
{
};

class HardwareDevice
{
  public:
    HardwareDevice() { cout << "HardwareDevice constructor\n"; }
    ~HardwareDevice() { cout << "HardwareDevice destructor\n"; }
    bool initialize(Params &)
    {
        cout << "Initializing hardware\n";
        return true;
    }
    void get_data() { cout << "Getting hardware data\n"; }
};

class TouchResponder
{
  public:
    TouchResponder() { cout << "TouchResponder constructor\n"; }
    ~TouchResponder() { cout << "TouchResponder destructor\n"; }
    void initialize() { cout << "Initializing touch responder\n"; }
    bool touch_down()
    {
        cout << "touch_down\n";
        return true;
    }
};

class Mouse : public HardwareDevice, public TouchResponder
{
  public:
    Mouse() { cout << "Mouse constructor\n"; }
    ~Mouse() { cout << "Mouse detructor\n"; }
    void process()
    {
        if (touch_down())
        {
            get_data();
        }
    }
    bool initialize(Params &params)
    {
        TouchResponder::initialize();
        return HardwareDevice::initialize(params);
    }
};

int main()
{
    Mouse mouse;
    Params params;
    mouse.process();
    mouse.initialize(params);
}
