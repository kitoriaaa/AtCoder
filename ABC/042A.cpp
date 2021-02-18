#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if (a[0] == 5 && a[1] == 5 && a[2] == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}