#include <iostream>
#include <vector>

using namespace std;

class Shape
{
  public:
    virtual void draw() const { cout << "Drawing a generic shape...\n"; }
    // ~Shape() { cout << "Goodbye from Shape object!\n"; }
    virtual ~Shape() { cout << "Goodbye from Shape object!\n"; }
};

class Circle : public Shape
{
  public:
    void draw() const override { cout << "Drawing a circle...\n"; }
    ~Circle() { cout << "Goodbye from Circle object!\n"; }
};

int main()
{
    vector<Shape *> shapes;

    shapes.push_back(new Circle);

    for (auto shape : shapes)
        shape->draw();

    for (auto shape : shapes)
        delete shape;
}
