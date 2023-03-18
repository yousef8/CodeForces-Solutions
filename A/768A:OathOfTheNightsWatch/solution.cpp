#include <iostream>
 using namespace std;

int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n, max{0}, min{1000000000};
  cin >> n;

  int arr[n];

  for (int i{0}; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }

  int res{0};

  for (int i : arr)
    if (i < max && i > min)
      res++;

  cout << res << "\n";
  return 0;
}