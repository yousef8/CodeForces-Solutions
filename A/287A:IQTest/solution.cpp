#include <iostream>

using namespace std;

int main() {
    char a[4][4];
     
     for (int i {0}; i < 4; i++)
        for (int j {0}; j < 4; j++)
            cin >> a[i][j];

    for (int i {0}; i < 3; i++) {
        for (int j {0}; j < 3; j++) {
            int black {0}, white {0};
            (a[i][j] == '#') ? black++ : white++;
            (a[i][j+1] == '#') ? black++ : white++;
            (a[i+1][j] == '#') ? black++ : white++;
            (a[i+1][j+1] == '#') ? black++ : white++;

            if (black <= 1 || white <= 1) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    
    cout << "NO\n";
    return 0;
}