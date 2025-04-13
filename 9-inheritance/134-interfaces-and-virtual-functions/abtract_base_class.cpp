#include <iostream>

using namespace std;

class Shape
{
  public:
    virtual void draw() const = 0;  // Pure virtual
};

class Circle : public Shape
{
  public:
    void draw() const override { cout << "Drawing a circle...\n"; }
};

class Triangle : public Shape
{
  public:
    void draw() const override { cout << "Drawing a triangle...\n"; }
};

int main()
{
    Shape shape;  // Does not compile
}
