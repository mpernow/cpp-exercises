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

  // Note: cannot be parallelised
  auto sum = accumulate(cbegin(vec), cend(vec), 0, [](int sum, int n) {
    return (n % 2 == 1) ? sum + n : sum;
  });

  cout << "Sum accumulated: " << sum << endl;
}
