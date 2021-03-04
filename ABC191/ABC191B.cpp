#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    int N, X;
    cin >> N >> X;
    VI A;
    rep(i, N) {
        int a;
        cin >> a;
        if (a != X) A.emplace_back(a);
    }

    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << endl;
    }

    return 0;
}