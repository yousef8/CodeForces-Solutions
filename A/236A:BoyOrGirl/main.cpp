#include <iostream>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  string s, ns{""};
  cin >> s;

  for (auto c : s)
    if (ns.find(c) == string::npos)
      ns += c;

  (ns.size() % 2 == 0) ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!\n";

  return 0;
}