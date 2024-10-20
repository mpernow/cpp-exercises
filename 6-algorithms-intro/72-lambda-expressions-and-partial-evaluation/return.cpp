#include <iostream>
#include <string>

using namespace std;

// Return lambda expression form function
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
}