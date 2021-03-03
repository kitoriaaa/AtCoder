#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;
    vector<long long> a(N);
    vector<long long> b(N);
    vector<long long> c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    long long total_not_prime = 0;
    int max_days = 0;
    for (int i = 0; i < N; i++) {
        total_not_prime += ((b[i] - a[i]+1) * c[i]);
        if (max_days < (b[i] - a[i]+1))
            max_days = b[i] - a[i] + 1;
    }

    long long tota_prime = 0;
    for (int i = 0; i < max_days; i++) {
        
    }

        cout << total_not_prime << endl;
    cout << max_days << endl;

    return 0;
}