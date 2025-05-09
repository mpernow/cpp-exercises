#include <iostream>
#include <memory>

using namespace std;

struct Son;

struct Father
{
    ~Father() { cout << "Father destructor" << endl; }

    void setSon(const shared_ptr<Son> &s) { mySon = s; }

    weak_ptr<const Son> mySon;  // Can be weak or shared
};

struct Son
{
    Son(const shared_ptr<Father> &f) : myFather(f) {}

    ~Son() { cout << "Son destructor" << endl; }

    weak_ptr<const Father>
        myFather;  // weak so it does not affect reference count of myFather
};

int main()
{
    cout << endl;
    {
        auto father = make_shared<Father>();
        auto son = make_shared<Son>(father);
        father->setSon(son);
    }
    cout << endl;
}
