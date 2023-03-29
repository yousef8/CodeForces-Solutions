#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i {0}; i < s.size(); i++){
        int n = int(s[i]) - 48;
        if (n > 4 && !(!i && n == 9))
            n = 9 - n;
        cout << n;
    }

    cout << "\n";
	return 0;
}