#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int n;
  cin >> n;
  string arr[n];

  for (int i{0}; i < n; i++){
    string s;
    cin >> s;

    if (s.size() > 10){
      ostringstream oss;
      oss << s.front() << s.size()-2 << s.back();
      s = oss.str();
    }

    arr[i] = s;
  }

  for (string w : arr)
    cout << w << "\n";

  return 0;
}