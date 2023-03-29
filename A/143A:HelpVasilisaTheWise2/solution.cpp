#include <iostream>

using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int gem[5];
    int freq[10] {0};

    gem[1] = (d1 - r2 + c1)/2;
    gem[2] = r1 - gem[1];
    gem[3] = c1 - gem[1];
    gem[4] = d1 - gem[1];

    // Check if any gem is out of range [1 - 9]
    for (int i {1}; i < 5; i++) {
        freq[gem[i]]++;
        if (gem[i] < 1 || gem[i] > 9) {
            cout << "-1\n";
            return 0;
        }
    }

    // Check if all gems are unique or nots
    for (int i {1}; i < 10; i++){
        if (freq[i] > 1) {
            cout << "-1\n";
            return 0;
        }
    }

    
    cout << gem[1] << " " << gem[2] << "\n" << gem[3] << " " << gem[4];
}