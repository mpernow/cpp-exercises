#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Shape
{
  public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape
{
  public:
    void draw() const { cout << "Drawing a circle..." << endl; }
};

class Triangle : public Shape
{
  public:
    void draw() const { cout << "Drawing a triangle..." << endl; }
};

class Square : public Shape
{
  public:
    void draw() const { cout << "Drawing a square..." << endl; }
};

unique_ptr<Shape> create_shape(int sides)
{
    if (sides == 1)
        return make_unique<Circle>();
    else if (sides == 3)
        return make_unique<Triangle>();
    else if (sides == 4)
        return make_unique<Square>();
    else
    {
        cout << "Cannot create a shape with " << sides << " sides" << endl;
        return nullptr;
    }
}

int main()
{
    vector<unique_ptr<Shape>> shapes;

    shapes.push_back(create_shape(1));
    shapes.push_back(create_shape(3));
    shapes.push_back(create_shape(4));

    for (auto &it : shapes)
        it->draw();
}
