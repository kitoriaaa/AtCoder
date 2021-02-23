#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    string S;
    cin >> S;

    char c = S[0];
    int cnt = 0;
    for (char i : S) {
        if (i != c) {
            c = i;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}