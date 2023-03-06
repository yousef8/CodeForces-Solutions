#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  string s;
  char current{'a'};
  int moves{0};
  cin >> s;

  for (int i{0}; i < s.size(); i++){
    int cw = abs(current - s[i]);
    int ccw = 26 - cw;
    moves += min(cw, ccw);
    current = s[i];
  }

  cout << moves << "\n";
  return 0;
}