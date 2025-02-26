#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  string str{"A test string"};

  cout << "The string: " << str << endl;
  for_each(begin(str), end(str), [](char &c) { c = toupper(c); });
  cout << "The string after modification: " << str << endl;
}
