#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{3, 1, 4, 1, 5, 9};

  cout << "Vector: ";
  for (auto v : vec) {
    cout << v << ", ";
  }
  cout << endl;

  auto sum = accumulate(cbegin(vec), cend(vec), 0);

  cout << "Sum accumulated: " << sum << endl;
}
