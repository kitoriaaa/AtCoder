#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt=1;
    cin >> n;
    vector<int> d(n);
    for (int i=0; i < n; i++) cin >> d.at(i);
    sort(d.begin(), d.end());
    int now = d.at(0);
    for (int i=0; i < n; i++) {
        if (now < d.at(i)) {
            now = d.at(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}