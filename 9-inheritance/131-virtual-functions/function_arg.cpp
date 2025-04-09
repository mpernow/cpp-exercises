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
    void draw() const { cout << "Drawing a circle...\n"; }
};

class Triangle : public Shape
{
  public:
    void draw() const { cout << "Drawing a triangle...\n"; }
};

void draw_shape(const Shape &s) { s.draw(); }

int main()
{
    Circle circle;
    Shape &rcircle = circle;

    Triangle triangle;
    Shape &rtriangle = triangle;

    draw_shape(rcircle);
    draw_shape(rtriangle);
}
