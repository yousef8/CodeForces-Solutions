#include <iostream>

using namespace std;

int main() {
  int y, w, n, d{6};
  cin >> y >> w;

  n = 6 - max(y, w) + 1;

  for (int i{n}; i > 1; i--)
    if ( n%i == 0 && d%i == 0)
      n /= i, d /= i;

  cout << n << "/" << d << "\n";
  return 0;
}