#include <iostream>
#include <vector>

using namespace std;

class refrigerator
{
    int temperature;
    bool door_open;
    bool power_on;

  public:
    refrigerator(int temp, bool open, bool power)
        : temperature(temp), door_open(open), power_on(power)
    {
    }
    void print()
    {
        cout << "Temperature = " << temperature;
        cout << boolalpha;
        cout << ", door_open = " << door_open;
        cout << ", power_on = " << power_on << endl;
    }
};

int main()
{
    vector<refrigerator> vec;

    refrigerator fridge(2, false, true);
    vec.push_back(fridge);  // insert previously created element, copying it

    vec.push_back(
        refrigerator(3, false, true));  // copy temporary object into vector

    vec.emplace_back(5, false, false);  // create a new object in place

    cout << "Vector elements:\n";
    for (auto el : vec)
        el.print();
    cout << endl;
}
