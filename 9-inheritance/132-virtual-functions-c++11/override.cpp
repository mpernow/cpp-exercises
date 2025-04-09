#include <iostream>

using namespace std;

class Shape
{
  public:
    virtual void draw() const { cout << "Drawing a generic shape...\n"; }
};

class Circle : public Shape
{
  public:
    void draw() const override { cout << "Drawing a circle...\n"; }
    // void draw(int radius) const override;  // Error - does not override!
};

int main()
{
    Circle circle;
    circle.draw();
}
