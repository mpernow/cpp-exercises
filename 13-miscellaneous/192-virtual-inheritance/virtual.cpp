#include <iostream>

using namespace std;

class Employee
{
  public:
    void address()
    {
        cout << "Employee address = " << static_cast<void *>(this) << endl;
    }
};

class SalesEmployee : public virtual Employee
{
};

class Manager : public virtual Employee
{
};

class SalesManager : public SalesEmployee, public Manager
{
};

int main()
{
    SalesManager sm;

    cout << "Cast to SalesEmployee\n";
    SalesEmployee *se{static_cast<SalesEmployee *>(&sm)};
    se->address();

    cout << "Cast to Manager\n";
    Manager *m{static_cast<Manager *>(&sm)};
    m->address();
    // Now the addresses are the same
}
