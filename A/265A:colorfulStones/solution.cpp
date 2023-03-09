#include <iostream>

using namespace std;

int main() {
  string s, t;
  int liss {0};
  cin >> s >> t;

  for (auto ch : t)
    if (ch == s[liss])
      liss++;
  
  cout << (liss+1) << "\n";
  return 0;
}