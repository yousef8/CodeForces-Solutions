#include <iostream>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  string s1, s2;

  cin >> s1 >> s2;

  for (int i{0}; i < s1.size(); i++){
    if (tolower(s1[i]) < tolower(s2[i])){
      cout << "-1\n";
      return 0;
    }
    if (tolower(s1[i]) > tolower(s2[i])){
      cout << "1\n";
      return 0;
    }
  }

  cout << "0\n";
  return 0;
}