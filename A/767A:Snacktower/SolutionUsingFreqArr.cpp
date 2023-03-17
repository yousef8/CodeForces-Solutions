#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  
  int n;
  cin >> n;

  int a[n + 1]{0};

  int max{n};

  while (n--) {
    int s;
    cin >> s;
    a[s]++;

    while (a[max]){
      cout << max << " ";
      --max;
    }
    cout << "\n";
  }

  return 0;
}