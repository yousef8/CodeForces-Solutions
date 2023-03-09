#include <iostream>

using namespace std;

int main() {
  int k, r, count{1};
  cin >> k >> r;

  for (; count <= 10; count++){
    int rem = (k * count) % 10;
    if (!rem || rem == r)
      break;
  }

  cout << count << "\n";
  return 0;
}