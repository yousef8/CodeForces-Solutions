#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin >> n;

    int freq[1001] {0};
    int max = 0;
    for (int i {0}; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
        if (a > max) max = a;
    }

    for (int i {1}; i <= max; i++) {
        if (freq[i]){
            if (freq[i] - 1 > (n - freq[i])){
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}