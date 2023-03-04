#include <iostream>

using namespace std;

int main() {
  int n, p, v, t, res{0};

  cin >> n;

  while (n) {
    cin >> p >> v >> t;
    if (p+v+t >= 2)
      res++;
    --n;
  }

  cout << res << "\n";
  return 0;
}