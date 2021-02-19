#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int N;
    cin >> N;
    VI vec(N);
    rep(i, N) cin >> vec[i];

    vector<ll> cost(201);
    
    rep2(i, -100, 101) {
        rep(j, N) {
            cost[i+100] += (i-vec[j])*(i-vec[j]);
        }
    }

    vector<ll>::iterator min = min_element(cost.begin(), cost.end());
    ll ans = *min;
    cout << ans << endl;


    return 0;
}