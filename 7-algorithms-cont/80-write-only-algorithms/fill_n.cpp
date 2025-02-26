#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec(10);
  // returns iterator to next element
  // Note: assumes that there are at least 5 elements - does not check!
  auto begin_rest = fill_n(begin(vec), 5, 42); // assign 42 to first 5 elements
  fill(begin_rest, end(vec), 99);

  cout << "Vector populated by fill and fill_n: ";
  for (auto v : vec)
    cout << v << ", ";
  cout << endl;
}
