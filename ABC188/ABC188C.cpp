#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int l = pow(2.0, n);
    vector<int> A(l);
    // for (int i = 0; i < l; i++)
    //     cin >> A[i];

    vector<int> last(pow(2.0, n - 1));
    vector<int> first(pow(2.0, n - 1));
    for (int i = 0; i < pow(2.0, n - 1); i++) cin >> first[i];
    for (int i = 0; i < pow(2.0, n - 1); i++) cin >> last[i];

    vector<int>::iterator first_max = max_element(first.begin(), first.end());
    vector<int>::iterator last_max  = max_element(last.begin(), last.end());

    size_t ind;
    if (*first_max < *last_max) {
        ind = distance(first.begin(), first_max);
    } else {
        ind = distance(last.begin(), last_max);
        ind += pow(2.0, n - 1);
    }

    cout << ind+1 << endl;
    return 0;
}