#include <iostream>
#include <bitset>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  int n;
  cin >> n;

  bitset<100001> bs;

  int max{n};

  while (n--) {
    int s;
    cin >> s;
    bs.set(s);

    while (bs.test(max)){
      cout << max << " ";
      --max;
    }
    cout << "\n";
  }

  return 0;
}