#include <iostream>

class Base
{
  public:
    Base(int x) : x(x) {}
    virtual void print() const { std::cout << "Base" << std::endl; }

  private:
    int x;
};

class Child : public Base
{
  public:
    void print() const { std::cout << "Child" << std::endl; }
};

class Grandchild : public Child
{
  public:
    void print() const { std::cout << "Grandchiild" << std::endl; }
};

void print_class(const Base &base) { base.print(); }

int main()
{
    Base base(1);
    Child child(2);
    Grandchild grandchild(2);

    print_class(base);
    print_class(child);
    print_class(grandchild);
}
