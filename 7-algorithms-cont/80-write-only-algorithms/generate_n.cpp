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
  vector<int> vec;
  generate_n(back_inserter(vec), 10, square());

  for (auto v : vec)
    cout << v << ", ";
  cout << endl;
}
