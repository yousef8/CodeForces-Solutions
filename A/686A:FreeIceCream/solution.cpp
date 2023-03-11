#include <iostream>

using namespace std;

int main() {
  int n, dis{0};
 
  unsigned long long ic{0};
  cin >> n >> ic;

  for (int i{0}; i < n; i++){
    char t;
    int d;
    cin >> t >> d;

    if (t == '+')
      ic += d;
    
    if (t == '-') {
      if (ic >= d)
        ic -= d;
      else
        dis++;
    }
  }

  cout << ic << " " << dis << "\n";
  return 0;
}