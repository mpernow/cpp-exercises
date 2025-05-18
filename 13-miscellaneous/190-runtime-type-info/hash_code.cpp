#include <iostream>
#include <typeinfo>

using namespace std;

class Shape
{
  public:
    virtual ~Shape() {}
};

class Circle : public Shape
{
  public:
    void func() { cout << "Calling Circle's func()\n"; }
};
class Triangle : public Shape
{
};

int main()
{
    Circle circle;
    Triangle triangle;
    // Shape *pShape = &triangle;
    Shape *pShape = &circle;

    Circle *pCircle = dynamic_cast<Circle *>(pShape);

    // Check if nullptr
    if (pCircle)
    {
        pCircle->func();
    }
    else
    {
        cout << "Could not cast pShape to Circle\n";
    }
}
