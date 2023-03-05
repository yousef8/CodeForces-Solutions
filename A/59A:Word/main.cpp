#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int sl {(int) s.size()}, ul {0};

  for (auto c : s)
    if (isupper(c))
      ul++;
  
  if (ul > sl/2)
    for (int i {0}; i < sl; i++)
      s[i] = toupper(s[i]);
  
  else
    for (int i {0}; i < sl; i++)
      s[i] = tolower(s[i]);

  cout << s << "\n";
  return 0;
}