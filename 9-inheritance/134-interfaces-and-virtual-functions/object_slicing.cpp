#include <iostream>

using namespace std;

class Shape
{
  public:
    virtual void draw() const { cout << "Shape::draw()\n"; }
};

class Circle : public Shape
{
  public:
    void draw() const override { cout << "Drawing a circle...\n"; }
};

// Function taking a Shapce by value
void draw_shape(Shape s) { s.draw(); }

int main()
{
    Circle circle;
    draw_shape(circle);
}
