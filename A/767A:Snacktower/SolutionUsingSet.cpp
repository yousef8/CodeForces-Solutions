#include <bits/stdc++.h>
// #include <chrono>

using namespace std;

int main() {
  // auto start = chrono::high_resolution_clock::now();

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  int n;
  cin >> n;

  int max{n};
  set<int> temp;

  for (int i = 0;i < n; i++){
    int s;
    cin >> s;

    if (s == max) {
      cout << s;

      for (set<int>::iterator it { temp.find(--max)};  it != temp.end();  it = temp.find(--max)) {
        cout << " " << *it;
        temp.erase(it);
      }
      cout << "\n";
    } else
    {
      cout << "\n";
      temp.insert(s);
    }
  }
  // auto end = chrono::high_resolution_clock::now();

  // double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();

  // time_taken *= 1e-9;

  // cout << "Time taken : " << fixed << time_taken << setprecision(9) << "\n";

  return 0;
}