#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, total{0}, sum{0}, coins{0};
  cin >> n;

  int arr[n];

  for (int i{0};i < n; i++){
    cin >> arr[i];
    total += arr[i];
  }

  sort(arr, arr + n);

  for (int i{n - 1}; i >= 0 && sum <=(total / 2); i--){
    sum += arr[i];
    coins++;
  }

  cout << coins << "\n";
  return 0;
}