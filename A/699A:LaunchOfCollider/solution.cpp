#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin >> n;

    int d[n];
    unsigned int p[n];

    //Get directions
    for (int i {0}; i < n; i++) {
        char dir;
        cin >> dir;
        d[i] = (dir == 'R') ? 1 : -1;
    }

    //Get particles cordinations
    for (int i {0}; i< n; i++)
        cin >> p[i];
    
    int mini = 1000000002;

    for (int i {0};i < n; i++)
        if (i != n-1)
            if (d[i] - d[i+1] == 2)
                if ((p[i+1] - p[i])/2 < mini)
                    mini = (p[i+1] - p[i])/2;

    cout << ((mini == 1000000002) ? -1 : mini) << "\n";
    return 0;
}