#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char encoded[n+1], decoded[n+1];
    cin >> encoded;

    for (int i {0}; i < n; i++){
        int pos = (n-i)/2 - !((n-i) % 2) + (((n - i) % 2) ? i : 0);
        decoded[pos] = encoded[i];
    }

    decoded[n] = '\0';

    cout << decoded << "\n";
    return 0;
}