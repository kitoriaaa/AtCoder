#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> stone(n);
    int r = 0;

    for (int i=0; i < n; i++) {
        cin >> stone.at(i);
        if (stone.at(i) == 'R') r++;
    }
    int cnt = 0;
    for (int i=0; i < r; i++) {
        if (stone.at(i) == 'R') cnt++;
    }

    cout << r-cnt << endl;
    return 0;
}
