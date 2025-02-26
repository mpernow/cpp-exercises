#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class square {
private:
  int n{0};

public:
  int operator()() {
    ++n;
    return n * n;
  }
};

int main() {
  vector<int> vec(10);
  // Using a functor
  generate(begin(vec), end(vec), square());

  for (auto v : vec)
    cout << v << ", ";
  cout << endl;
}
