#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int arr[5][5];
  int x, y, moves{0};

  for (int i{0}; i < 5; i++){
    for (int j{0}; j < 5; j++){
      cin >> arr[i][j];
      if  (arr[i][j] == 1)
        x = i, y = j;
    }
  }

  while (x != 2) {
    (x < 2) ? x++ : x--;
    moves++;
  }

  while (y != 2) {
    (y < 2) ? y++ : y--;
    moves++;
  }

  cout << moves << "\n";
  return 0;
}