#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int solution(int x, int y) {

  int maxi {max(x,y)}, mini {min(x,y)};
  long long count{0};

  for (int i{1}; i <= mini; i++)
    count +=  ((i + maxi)/5) - (i / 5);

  cout << count << "\n";
  return 0;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  int x, y;
  while (cin >> x >> y)
  {
    solution(x, y);
  }
  return 0;
}

// 200000000000