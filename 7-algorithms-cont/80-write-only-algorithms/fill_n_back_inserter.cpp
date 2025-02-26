#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;

  // Using back_inserter(vec) will insert into vector every time an element is
  // being filled
  // Equivalent to a loop with push_back
  auto begin_rest = fill_n(back_inserter(vec), 5, 42);

  cout << "Vector populated by fill_n: ";
  for (auto v : vec)
    cout << v << ", ";
  cout << endl;
}
