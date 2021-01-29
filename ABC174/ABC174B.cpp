#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    for (int i=0; i < n; i++) cin >> x.at(i) >> y.at(i);

    int cnt = 0;
    for (int i=0; i < n; i++) {
        if (sqrt(pow(x.at(i), 2)+pow(y.at(i),2)) <= d) cnt++;
    }
    cout << cnt << endl;

    return 0;
}