#include <iostream>
#include <map>

using namespace std;

int main() {
  int count{0};
  map<char, int> mp;
  cin >> mp['1'] >> mp['2'] >> mp['3'] >> mp['4'];

  string s;
  cin >> s;

  for (auto c : s)
    count += mp[c];

  cout << count << "\n";
  return 0;
}