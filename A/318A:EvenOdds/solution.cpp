#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  long long n, k;
  cin >> n >> k;

  if (k <= (n/2 + n%2)){
    cout << 2 * k - 1 << "\n";
    return 0;
  }

  k -= (n / 2 + n % 2);
  cout << 2 * k << "\n";
  return 0;
}