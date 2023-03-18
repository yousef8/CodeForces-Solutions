#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  int n, k, res{0};
  cin >> n >> k;
  int arr[n + 1];

  for (int i{1}; i <= n; i++)
    cin >> arr[i];

  for (int i{1}; i <= n; i++)
    if (arr[i] && arr[i] >= arr[k])
      res++;

  cout << res << "\n";
  return 0;
}