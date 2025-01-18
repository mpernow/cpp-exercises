#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> vec(10);

  // Call iota() with starting value of 1
  iota(begin(vec), end(vec), 1);

  cout << "Vector populated by iota: ";
  for (auto v : vec)
    cout << v << ", ";
  cout << "\n";
}
