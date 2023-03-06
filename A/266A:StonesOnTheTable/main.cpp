#include <iostream>

using namespace std;

int main() {
  int n, remove_count {0};
  cin >> n;
  string s;
  cin >> s;
  char prev = '\0';

  for (auto ch : s)
    (prev == ch) ? remove_count++ : prev = ch;
  
  cout << remove_count << "\n";
  return 0;
}