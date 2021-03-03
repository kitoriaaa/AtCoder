#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> c(n), l(q), r(q);
    for (int i=0; i < n; i++) cin >> c[i];
    for (int i=0; i < q; i++) cin >> l[i] >> r[i];
    
    vector<vector<int>> vec(n, vector<int>(n));
    for (int i=0; i < n; i++) {
        set<int> tmp;
        for (int j=i; j < n; j++) {
            tmp.insert(c[j]);
            vec.at(i).at(j) = tmp.size();
        }
    }

    for (int i=0; i < q; i++) cout << vec.at(l[i]-1).at(r[i]-1) - vec.at(l[i]-1).at(l[i]-1)+1 << endl;

    return 0;
}

// 未完
