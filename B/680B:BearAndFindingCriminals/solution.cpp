#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;

    int arr[n + 1];

    for (int i{1}; i <= n; i++)
        cin >> arr[i];

    int R = n - a;
    int L = n - 1 - R;
    int max_dis = max(R, L);

    int sure_criminals{arr[a]};
    for (int i{1}; i <= max_dis; i++)
    {
        int cities{0}, criminals{0};

        if (i <= R)
            cities++, criminals += arr[a + i];

        if (i <= L)
            cities++, criminals += arr[a - i];

        if (cities == criminals)
            sure_criminals += criminals;
    }

    cout << sure_criminals << "\n";
    return 0;
}