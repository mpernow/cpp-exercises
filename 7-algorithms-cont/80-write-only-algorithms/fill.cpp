#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec(10);
  fill(begin(vec), end(vec), 42); // assign 42 to all its elements

  cout << "Vector populated by fill: ";
  for (auto v : vec)
    cout << v << ", ";
  cout << endl;

  vector<int> vec2(10);
  for (auto &v : vec2)
    v = 42;

  cout << "Vector populated by loop: ";
  for (auto v : vec2)
    cout << v << ", ";
  cout << endl;
}
