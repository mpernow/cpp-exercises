#include <iostream>
#include <vector>

using namespace std;

class Shape
{
  public:
    virtual void draw() { cout << "Drawing a generic shape...\n"; }
};

class Circle : public Shape
{
  public:
    void draw() { cout << "Drawing a circle...\n"; }
};

int main()
{
    vector<Shape *> shapes;

    shapes.push_back(new Circle());

    for (auto shape : shapes)
        shape->draw();  // Resolved at runtime since virtual

    for (auto shape : shapes)
        delete shape;
}
