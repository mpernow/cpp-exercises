#include <iostream>
#include <memory>

using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    auto p{make_unique<Point>(Point{3, 6})};

    cout << p->x << ", " << p->y << endl;
}
