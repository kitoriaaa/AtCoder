#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;
typedef long long int ll;


bool isValid(VI &vec, int n) {
    while (n > 0) {
        if(vec[n%10] != 0) return false;
        n /= 10;
    }
    return true;
}


int main() {
    int N, K;
    cin >> N >> K;
    VI vec(11);
    rep(i, K) {
        int n;
        cin >> n;
        vec[n]++;
    }

    rep2(i, N, 100000) {
        if (isValid(vec, i)) {
            cout << i << endl;
            break;
        }        
    }

    return 0;
}