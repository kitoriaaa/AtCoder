#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    int ans = 0;
    
    if (N <= K) {
        cout << X*N << endl;
    } else {
        ans += X*K;
        ans += (N-K)*Y;
        cout << ans << endl;
    }

    return 0;
}