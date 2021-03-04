#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int n;
    cin >> n;
    VI a(n);
    rep(i, n) cin >> a[i];
    
    int max_v = 0;
    rep(i, n) {
        if (a[i] > max_v) max_v = a[i];
    }

    int max_r = 0;
    rep2(i, 1, max_v+1) {
        long long cnt = 0;
        rep(j, n) {
            if (i <= a[j]) {
                cnt += i;

            } else {
                // cout << cnt << endl;
                if (max_r < cnt) max_r = cnt;
                cnt = 0;
            }
        }
        if (max_r < cnt) max_r = cnt;
    }

    cout << max_r << endl;
    return 0;
}