#include <iostream>
#include <memory>

using namespace std;

int main()
{
    shared_ptr<int> p1{new int(42)};  // Less efficient

    auto p2{make_shared<int>(42)};  // More efficient

    cout << *p1 << endl;

    p1 = p2;

    shared_ptr<int> p3(p2);
    shared_ptr<int> p4(std::move(p2));
    p1 = nullptr;
}
