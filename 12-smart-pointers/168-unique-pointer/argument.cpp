#include <iostream>
#include <memory>

using namespace std;

struct Point
{
    int x;
    int y;
};

void func(unique_ptr<Point> upp) { cout << upp->x << ", " << upp->y << endl; }

int main()
{
    auto ptr{make_unique<Point>(Point{3, 6})};
    func(std::move(ptr));
}
