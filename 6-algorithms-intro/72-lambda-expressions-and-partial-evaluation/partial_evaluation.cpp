#include <iostream>
#include <string>

using namespace std;

auto greeter(const string &salutation)
{
    return [salutation](const string &name)
    { return salutation + ", "s + name; };
}

int main()
{
    auto greet = greeter("Hello"s);

    cout << "Greeting: " << greet("James") << endl;
    cout << "Greeting: " << greet("students") << endl;

    auto greet_formal = greeter("Good morning"s);

    cout << "Formal greeting: " << greet_formal("Dr Stroustrup") << endl;
}