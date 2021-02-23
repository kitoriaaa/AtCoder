#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    bool ans = false;
    if (a == b+c) ans = true;
    else if (b == a+c) ans = true;
    else if (c == a+b) ans = true;
    
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}