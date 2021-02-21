#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


VI I2V(int bit, int N) {
    VI S;
    int tmp = 1;
    tmp *= 10;
    rep(i, N) {
        if (bit & (1<<i)) S.emplace_back(i);
    }
    return S;
}


int main() {
    string s;
    cin >> s;

    int N = s.size()-1;
    
    // 文字列 s について区切る場所を考える
    // 区切り方は 2^(文字列の長さ-1) 通りある -> bit全探索
    // bit のときi桁目のビットを見て立っていれば，区切る -> ansに足す
    // 立っていなければ 10倍する

    ll ans = 0;
    for (int bit = 0; bit < (1<<N); bit++) {
        ll tmp = 0;
        rep(i, N) {
            tmp += s[i]-'0';
            // cout << tmp << endl;
            if (bit & (1<<i)) {
                // cout << "bit: " << bit << " true: " << tmp << endl;
                ans += tmp;
                tmp = 0;
            }
            tmp *= 10;
        }
        tmp += s[N]-'0';
        // cout << "bit: " << bit << " " << tmp << endl;
        ans += tmp;

    }
    cout << ans << endl;

    return 0;
}

