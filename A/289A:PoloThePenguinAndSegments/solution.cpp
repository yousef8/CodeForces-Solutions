#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, k;
    cin >> n >> k;

    // x represents the numbers of integers covered by segments
    int x = 0;
    for (int i {0}; i < n; i++){
        int l, r;
        cin >> l >> r;
        x += r - l + 1;
    }

    int moves = 0;

    //Don't know why but "k - x%k" will give you the number of moves required to get the appropriate covered number that is divisible by k 
    //no matter if x is bigger of less than k
    if (x%k)
        moves = k - x % k;

    // the above 3 lines [18, 22, 23] can be replaced by the following line
    // moves = (k- (x % k)) % k
    
    cout << moves << "\n";
    return 0;
}