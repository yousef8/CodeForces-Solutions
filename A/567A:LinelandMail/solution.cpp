#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i{0}; i < n; i++){
    if (!i)
      cout << arr[i + 1] - arr[i] << " ";
    else if (i == n-1)
      cout << arr[i] - arr[i - 1] << " ";
    else
      cout << min(arr[i] - arr[i - 1], arr[i + 1] - arr[i]) << " ";

    cout << max(arr[i] - arr[0], arr[n - 1] - arr[i]) << "\n";
  }

  return 0;
}