#include <iostream>

using namespace std;

int main() {
    int n , k;
    cin >> n >> k;

    int r[2*n+2];
    for (int i {1}; i <= 2*n+1; i++)
        cin >> r[i];
    
    for (int i {1}; i < ((2*n+1)/2 + (2*n+1)%2); i++)
        if (r[2*i - 1] < r[2*i]-1 && r[2*i]-1 > r[2*i + 1])
            r[2*i] -=(k > 0), --k;
    
    for (int i {1}; i <= 2*n+1; i++)
        cout << r[i] << " ";
    
    cout << "\n";
    return 0;
}