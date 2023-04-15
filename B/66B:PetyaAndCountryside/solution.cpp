#include <iostream>
#include <cstdio>

using namespace std;

int solution(int n) {

    int arr[n];

    for(int i {0}; i < n; i++)
        cin >> arr[i];

    int max_sec_count {0};

    for (int i {0}; i < n; i++){
        int sec_count = 1;

        int j = i;
        while( j > 0 && arr[j-1] <= arr[j])
            j--, sec_count++;
        
        j = i;
        while ( j < n-1 && arr[j+1] <= arr[j])
            j++, sec_count++;
        
        if (sec_count > max_sec_count)
            max_sec_count = sec_count;
    }

    return max_sec_count;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    int n;
    while (cin >> n) {
        cout << solution(n) << "\n";
    }

    return 0;
}