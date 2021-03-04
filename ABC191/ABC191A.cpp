#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    double time = double(d)/v;

    if ((t <= time) && (time <= s)) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}