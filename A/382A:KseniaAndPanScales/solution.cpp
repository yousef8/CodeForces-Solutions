#include <iostream>
#include <string>

using namespace std;

int solution(string ls, string rs, string rw) {
    int total = ls.size() + rs.size() + rw.size();

    if (total%2) {
        cout << "Impossible\n";
        return 0;
    }

    if (ls.size() > total/2 || rs.size() > total/2) {
        cout << "Impossible\n";
        return 0;
    }

    for (int i {0}; ls.size() < total/2; i++)
        ls += rw[i];
    
    cout << ls << "|";

    for(int i {rw.size() - (total/2 - rs.size())}; rs.size() < total/2; i++)
        rs += rw[i];
    
    cout << rs << "\n";
    return 0;
}

int main() {
    string ls, rs, rw;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    while (getline(cin, ls, '|') && getline(cin, rs) && getline(cin, rw))
        solution(ls, rs, rw);
    
    return 0;
}