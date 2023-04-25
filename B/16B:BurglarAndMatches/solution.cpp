#include <iostream>

using namespace std;

int main() {
    int n, m, matches {0};
    int mp[11] {0};

    cin >> n >> m;

    for (int i {0}; i < m; i++) {
        int a , b;
        cin >> a >> b;
        mp[b] += a;
    }

    for (int i {10}; i > 0 && n; --i) {
        if (!mp[i])
            continue;
        
        if (n > mp[i]) {
            matches += mp[i] * i;
            n -= mp[i];
            mp[i] = 0;
        }

        if (n <= mp[i] ) {
            matches += n * i;
            n = 0;
            mp[i] -= n;
        }
    }

    cout << matches << "\n";
    
    return 0;
}