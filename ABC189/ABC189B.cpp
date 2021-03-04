#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int n, x;
    cin >> n >> x;
    VI v(n);
    VI p(n);
    vector<double> a(n);
    rep(i, n) {
        cin >> v[i] >> p[i];
        a[i] = (double)v[i]*p[i]/(double)100.0;
    }


    long double cnt = 0;
    int ans = -1;
    rep(i, n) {
        cnt += a[i];

        if (cnt > x) {
            ans = i+1;
            break;
        }
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}