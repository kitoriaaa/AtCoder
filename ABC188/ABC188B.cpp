#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int cnt = 1;
    ;
    for (int i = 0; i < n; i++) {
        cnt += A[i] * B[i];
    }
    
    if (cnt == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
        return 0;
}