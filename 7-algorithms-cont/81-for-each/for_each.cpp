#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  string str{"A test string"};

  for_each(cbegin(str), cend(str), [](const char c) { cout << c << ", "; });
  cout << endl;
}
