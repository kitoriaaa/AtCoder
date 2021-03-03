#include <bits/stdc++.h>
using namespace std;


int main() {
    int k;
    cin >> k;

    int i=0;
    bool flag = false;
    long long int x = 7;
    for (i=1; i <= k; i++) {
        x %= k;
        if (x == 0) {
            flag = true;
            break;
        }
        x = x*10+7;    
    }

    if (flag) cout << i << endl;
    else cout << -1 << endl;
    return 0;
}