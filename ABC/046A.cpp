#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    set<int> color;
    rep(i, 3) {
        int a;
        cin >> a;
        color.insert(a);
    }
    cout << color.size() << endl;


    return 0;
}