#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;




int main() {
    string w;
    cin >> w;

    VI cnt(30);
    rep(i, w.size()) {
        cnt[w[i]-'a']++;
    }
    
    bool ans = true;
    rep(i, cnt.size()) if (cnt[i]%2 != 0) ans = false;

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

