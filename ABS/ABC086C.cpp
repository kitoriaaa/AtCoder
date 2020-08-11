#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n+1), x(n+1), y(n+1);
    for (int i=1; i < n+1; i++) cin >> t.at(i) >> x.at(i) >> y.at(i);

    bool res = true;
    for (int i=0; i < n; i++) {
        int dist = abs(x.at(i+1) - x.at(i)) + abs(y.at(i+1) - y.at(i));
        int time = t.at(i+1) - t.at(i);
        if (dist > time) res = false;
        if (dist%2 != time%2) res = false;
    }

    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}