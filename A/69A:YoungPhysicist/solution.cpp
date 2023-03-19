#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  int n, xs {0}, ys {0}, zs {0};
  cin >> n;

  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;
    xs += x, ys += y, zs += z;
  }

  cout << (( !xs && !ys && !zs) ? "YES" : "NO") << "\n";
  return 0;
}