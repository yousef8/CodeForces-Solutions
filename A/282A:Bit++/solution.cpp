#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  int n, x{0};
  char s[4];
  cin >> n;

  while (n--) {
    cin >> s;
    (s[1] == '+') ? x++ : x--;
  }

  cout << x << "\n";

  return 0;
}