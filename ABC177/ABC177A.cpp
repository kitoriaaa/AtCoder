#include <bits/stdc++.h>
using namespace std;

int main() {
    double d, t, s;
    cin >> d >> t >> s;
    double time = d / s;

    if (time <= t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

