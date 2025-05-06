#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto ptr{make_shared<int>(42)};

    weak_ptr<int> wptr = ptr;  // reference count still 1

    ptr = nullptr;  // reference count is 0

    /* shared_ptr<int> sp1 = wptr.lock();

    if (sp1)
    {
        cout << "shared_ptr's data is " << *sp1 << endl;
    }
    else
    {
        cout << "shared_ptr not valid" << endl;
    } */

    try
    {
        shared_ptr<int> sp1{wptr};
        cout << "shared_ptr's data is " << *sp1 << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
}
