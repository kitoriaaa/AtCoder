#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int N, L;
    cin >> N >> L;
    vector<string> s(N);
    rep(i, N) cin >> s[i];

    sort(s.begin(), s.end());
    
    rep(i, N) cout << s[i];
    cout << endl;

    return 0;
}