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
    // Shape &rShape = triangle;
    Shape &rShape = circle;

    try
    {
        // Throws std__bad_cast on error
        Circle &rCircle = dynamic_cast<Circle &>(rShape);
        rCircle.func();
    }
    catch (std::exception &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
}
