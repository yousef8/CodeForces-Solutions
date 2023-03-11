#include <iostream>

using namespace std;

int main() {
  string s, ss{""};

  getline(cin, s);

  for (int i{0}; i < s.size(); i++)
    if ('a' <= s[i] && s[i] <= 'z' && ss.find(s[i]) == string::npos)
      ss += s[i];

  cout << ss.size() << "\n";
  return 0;
}