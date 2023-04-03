#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    char pre {'.'};
    pair<int, int> rf {0,0};
    pair<int, int> lf {0,0};

    for (int i {1}; i < n; i++) {
        if (s[i] == 'R' && pre != 'R') rf.first = i+1, rf.second = i+1+1;
        if (s[i] == 'R' && pre == 'R') rf.second = i+1+1;
        if (s[i] == 'L' && pre != 'L') lf.second = i, lf.first = i+1;
        if (s[i] == 'L' && pre == 'L') lf.first = i+1;
        pre = s[i];
    }

    cout << ((rf.first) ? rf.first : lf.first) << " " << ((lf.second) ? lf.second : rf.second);
    return 0;
}