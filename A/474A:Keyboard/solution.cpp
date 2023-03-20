#include <iostream>
#include <string>

using namespace std;

int main() {
  string k = "qwertyuiopasdfghjkl;zxcvbnm,./";

  char shift;
  cin >> shift;

  string crypted, decrypted{""};
  cin >> crypted;

  for (char c : crypted) {
    int pos = k.find(c);
    decrypted += k[pos + ((shift == 'R') ? -1 : 1)];
  }

  cout << decrypted << "\n";
  return 0;
}