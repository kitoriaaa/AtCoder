#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i=1; i <=n; i++) {
        int total = i/10000 + i%10000/1000 + i%10000%1000/100 + i%10000%1000%100/10 + i%10000%1000%100%10;
        if ((total >= a) && (total <= b)) ans += i;
    }
    cout << ans << endl;
    return 0;
}