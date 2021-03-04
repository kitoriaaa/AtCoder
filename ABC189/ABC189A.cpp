#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c && a == c) cout << "Won" << endl;
    else cout << "Lost" << endl;


    return 0;
}