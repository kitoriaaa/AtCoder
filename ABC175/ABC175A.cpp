#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    int max = 0;

    for (char c: s) {
        if (c == 'R') cnt++;
        if (c == 'S') {
            if (max < cnt) max = cnt;
            cnt = 0;
        }
    }

    if (max < cnt) cout << cnt << endl;
    else cout << max << endl;

    return 0;
}