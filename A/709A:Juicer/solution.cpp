#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  #endif
  int n, b, d, empty{0}, squeezed{0};
  cin >> n >> b >> d;

    while (n) {
    int o;
    cin >> o;

    if (o <= b)
      squeezed += o;
    
    if (squeezed > d)
      empty++, squeezed = 0;

    --n;
  }

  cout << empty << "\n";
  return 0;
}