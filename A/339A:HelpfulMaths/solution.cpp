#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string s;
  vector<int> sum;

  cin >> s;

  for (char c : s)
    if ('1' <= c && c <= '3')
      sum.push_back(c-48);

  sort(sum.begin(), sum.end());

  bool first = true;
  for (auto n : sum){
    if (!first)
      cout << "+";
    else
      first = false;

    cout << n;
  }
  cout << "\n";
  return 0;
}