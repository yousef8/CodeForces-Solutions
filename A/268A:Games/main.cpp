#include <iostream>

using namespace std;

int main() {
  int n, conflict {0};
  cin >> n;
  int home[n], guest[n];

  for (int i {0}; i < n; i++)
    cin >> home[i] >> guest[i];
  
  for (int i {0}; i < n; i++)
    for (int j {0}; j < n; j++)
      if (home[i] == guest[j])
        conflict++;

  cout << conflict << "\n";
  return 0;
}