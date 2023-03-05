#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n, g {0};
  string m, l {""};

  cin >> n;

  while (n) {
    cin >> m;
    if (m != l)
      g++, l = m;
    --n;
  }

  cout << g << "\n";
  return 0;
}