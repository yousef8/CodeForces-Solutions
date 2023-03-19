#include <iostream>
#include <cctype>
#include <set>

using namespace std;

void toLower(char s[], int size) {
  for (int i{0}; i < size; i++)
    if (s[i] < 'a')
      s[i] = tolower(s[i]);
}
int main() {
  int n;
  cin >> n;
  char s[n];
  cin >> s;

  if (n < 26){
    cout << "NO\n";
    return 0;
  }

  set<char> letters;

  toLower(s, n);
  
  for (char c : s)
    letters.insert(c);

  cout << ((letters.size() == 26) ? "YES" : "NO") << "\n";
  return 0;
}