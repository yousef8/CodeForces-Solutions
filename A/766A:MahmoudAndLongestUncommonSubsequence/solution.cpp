#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  if (a.size() != b.size()){
    cout << max(a.size(), b.size()) << "\n";
    return 0;
  }

  if (a.find(b) == string::npos){
    cout << a.size() << "\n";
    return 0;
  }

  cout << "-1\n";
  return 0;
}