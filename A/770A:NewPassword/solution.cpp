#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  char arr[k];

  for (int i {0}; i < k; i++)
    arr[i] = 97+i;
  
  for (int i {0}; i < n; i++)
    cout << arr[i%k];
  
  cout << "\n";
  return 0;
}