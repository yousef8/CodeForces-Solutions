#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, k, good {0};
  cin >> n >> k;

  while (n--) {
    set<int> nums;
    int a;
    cin >> a;

    while (a) {
      int num = a % 10;
      a /= 10;
      if (num <= k) nums.insert(num);
    }

    if (nums.size() == k+1) good++;
  }

  cout << good << "\n";
  return 0;
}