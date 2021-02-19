#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int N;
    cin >> N;
    int cnt = 0;

    rep2(i, 1, N+1) cnt+=i;
    cout << cnt << endl;

    return 0;
}