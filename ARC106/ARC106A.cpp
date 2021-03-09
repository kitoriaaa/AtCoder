#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n; 
    cin >> n;

    long long A = 3;
    long long B = 5;
    for (int i = 1; i < n; i++) {
        if (A > n) break;
        B = 5;
        for (int j=1; j < n; j++) {
            if (A+B == n) {
                cout << i << ' ' << j << endl;
                return 0;
            }
            if (A+B > n) break;
            B *= 5;
        }
        A *= 3;
    }

    cout << -1 << endl;
    return 0;
}


