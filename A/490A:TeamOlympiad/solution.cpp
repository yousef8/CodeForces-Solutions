#include <iostream>
#include <map>
#include <stack>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, stack<int>> mp;

  for (int i{1}; i <= n; i++){
    int t;
    cin >> t;
    mp[t].push(i);
  }

  int teams = min(mp[1].size(), min(mp[2].size(), mp[3].size()));

  cout << teams << "\n";

  while (teams--){
    cout << mp[1].top() << " " << mp[2].top() << " " << mp[3].top() << "\n";
    mp[1].pop(), mp[2].pop(), mp[3].pop();
  }

  return 0;
}