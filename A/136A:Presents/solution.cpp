#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> whoTakeFromWho;

  for (int i{1}; i <= n; i++){
    int p;
    cin >> p;
    whoTakeFromWho[p] = i;
  }

  for (auto p : whoTakeFromWho)
    cout << p.second << " ";

  cout << "\n";
  return 0;
}