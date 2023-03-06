#include <iostream>

using namespace std;

int main() {
  int n, untreated{0}, hired{0};
  cin >> n;

  for (int i{0}; i < n; i++){
    int e;
    cin >> e;
    if (e < 0)
      (hired > 0) ? hired += e : untreated++;
    else
      hired += e;
  }

  cout << untreated << "\n";
  return 0;
}