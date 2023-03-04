#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n;
  cin >> n;

  vector<int> cols;

  for (int i{0}; i < n; i++){
    int v;
    cin >> v;
    cols.push_back(v);
  }

  for (int i{0}; i < n; i++){
    int min = cols[i];
    for (int j{i + 1}; j < n; j++){
      if (cols[j] < min){
        cols[i] = cols[j];
        cols[j] = min;
        min = cols[i];
      }
    }
  }

  for (int c : cols)
    cout << c << " ";
  return 0;
}