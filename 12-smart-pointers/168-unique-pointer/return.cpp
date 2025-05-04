#include <iostream>
#include <memory>

using namespace std;

struct Point
{
    int x;
    int y;
};

unique_ptr<Point> point_ptr(int x, int y)
{
    Point p{x, y};

    // We can either create the pointer and return it
    // auto ptr{make_unique<Point>(p)};
    // return ptr;

    // or we can just return it as such
    return make_unique<Point>(p);
}

int main()
{
    auto upp{point_ptr(3, 6)};
    cout << upp->x << ", " << upp->y << endl;
}
