#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i=0; i < n; i++) cin >> vec.at(i);


    sort(vec.begin(), vec.end());

    int cnt = 0;
    for (int i=vec.size()-1; i >= 0; i--) {
        for (int j=i-1; j >= 0; j--) {
            for (int k=j-1; k >= 0; k--) {
                if (vec[i] == vec[j] || vec[j]==vec[k] || vec[k] == vec[i]) continue;
                if ((vec[i] < vec[j]+vec[k]) && (vec[j] < vec[k]+vec[i]) && (vec[k] < vec[i]+vec[j])) cnt++;
            }
        }
    }
    
    cout << cnt << endl;

    return 0;
}


// 最大の辺が a であれば、必要十分条件は a<b+c のみ。