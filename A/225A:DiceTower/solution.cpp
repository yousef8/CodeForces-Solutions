#include <iostream>
#include <utility>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;

  set<pair<int, int>> s;

  int top;
  cin >> top;
  top = min(top, 7 - top);
  s.insert({top, 7-top});

  while(n--) {
    int freq[4]{0};

    int f1;
    cin >> f1;
    freq[min(f1, 7 - f1)] = 1;

    int f2;
    cin >> f2;
    freq[min(f2, 7 - f2)] = 1;

    for (int i{1}; i < 4; i++)
      if (!freq[i])
        s.insert({i, 7 - i});
  }

  cout << ((s.size() == 1) ? "YES" : "NO") << "\n";
  return 0;
}