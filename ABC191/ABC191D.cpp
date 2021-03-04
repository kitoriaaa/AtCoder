#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
typedef vector<int> VI;


int main() {
    double x, y, r;
    cin >> x >> y >> r;

    int y_min = ceil(y-r);
    int y_max = ceil(y+r);

    int x_min = ceil(x-r);
    int x_max = ceil(x+r);
    
    long long x_r = abs(x_max-x_min)+1;
    long long y_r = abs(y_max-y_min)+1;
    long long int cnt = x_r * y_r;

    cout << cnt << endl;
    cout << y_min << ' ' << y_max << endl;
    cout << x_min << ' ' << x_max << endl;
    // for (int i = x_min; i <= x_max; i++) {
    //     for (int j = y_min; j <= y_max; j++) {
    //         cout << i << ' ' << j << endl;
    //         if ((pow(i-x, 2.0)+pow(j-y, 2.0)) <= pow(r, 2.0)) cnt++;
    //     }
    // }

    long long  not_in = 0;
    for (int i = y_min; i <= y_max; i++) {
        if (!((pow(x_min-x, 2.0)+pow(i-y, 2.0)) <= pow(r, 2.0))) not_in++;
    }
    for (int i = y_min; i <= y_max; i++) {
        if (!((pow(x_max-x, 2.0)+pow(i-y, 2.0)) <= pow(r, 2.0))) not_in++;
    }
    for (int i = x_min+1; i < x_max; i++) {
        if (!((pow(i-x, 2.0)+pow(y_min-y, 2.0)) <= pow(r, 2.0))) not_in++;
    }
    for (int i = x_min+1; i < x_max; i++) {
        if (!((pow(i-x, 2.0)+pow(y_max-y, 2.0)) <= pow(r, 2.0))) not_in ++;
    }

    cout << not_in <<endl;
    cout << cnt-not_in << endl;

    return 0;
}



