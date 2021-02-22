#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;



ll power(int base, int expt) {
    if (expt == 0) return 1;
    else return base*power(base, expt-1);
}


int main() {
    int N, K;
    cin >> N>>K;

    ll cnt;
    cnt = K*power(K-1, N-1);

    cout << cnt << endl;
    return 0;
}
