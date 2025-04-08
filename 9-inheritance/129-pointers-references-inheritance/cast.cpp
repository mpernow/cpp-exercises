#include <iostream>
#include <vector>

using namespace std;

class Shape
{
  public:
    void draw() { cout << "Drawing a generic shape...\n"; }
};

class Circle : public Shape
{
  public:
    void draw() { cout << "Drawing a circle...\n"; }
    void area() { cout << "Calculating area of circle...\n"; }
};

int main()
{
    vector<Shape *> shapes;

    shapes.push_back(new Circle);

    for (auto s : shapes)
        static_cast<Circle *>(s)
            ->draw();  // Cast to circle to access Circle::draw()

    for (auto s : shapes)
        delete s;
}
