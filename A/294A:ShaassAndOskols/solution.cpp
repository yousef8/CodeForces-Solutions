#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  #endif
  int n, m;
  cin >> n;

  int arr[n];

  for (int i{0}; i < n; i++)
    cin >> arr[i];

  cin >> m;
  while (m) {
    int x, y;
    cin >> x >> y;

    int l = y - 1;
    int r = arr[x - 1] - y;

    arr[x - 1] = 0;
    if (x != 0)
      arr[x-2] += l;
    if (x <= n-1)
      arr[x] += r;
    --m;
  }

  for (int b : arr)
    cout << b << "\n";

  return 0;
}