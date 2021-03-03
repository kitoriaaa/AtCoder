#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, k, d;
    cin >> x >> k >> d;
    
    if (abs(x) > abs(k*d)) {
        if (x < 0) x -= k*d;
        else x += k*d;
    } else{
        bool isplus;
        if (x >= 0) isplus = true;
        else isplus = false;
        for (int i=0; i < k; i++) {
            if (!isplus) 
            if (x >= 0) x -= d;
            else x += d;
        }
    }
    cout << abs(x) << endl;

    return 0;
}
