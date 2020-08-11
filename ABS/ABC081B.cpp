#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt=1, flag=0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        if (a.at(i)%2==0) {
            a.at(i) /= 2;
        } else {
            cout << 0 << endl;
            return 0;
        }
    }

    while (flag == 0){
        for (int i=0; i < n; i++) {
                if (a.at(i) % 2 == 0) {
                    a.at(i) /= 2;
                } else {
                    flag = 1;
                    break;
                }
            }
        if (flag==0)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}