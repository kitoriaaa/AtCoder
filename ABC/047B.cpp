#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    int W, H, N;
    cin >> W >> H >> N;
    
    pair<int, int> left = make_pair(0, 0);
    pair<int, int> right = make_pair(W, H);

    vector<tuple<int, int, int>> vec;

    rep(i, N) {
        int x, y, a;
        cin >> x >> y >> a;
        vec.emplace_back(make_tuple(x, y, a));
    }

    rep(i, vec.size()) {
        int x, y, a;
        a = get<2>(vec[i]);
        x = get<0>(vec[i]);
        y = get<1>(vec[i]);
        switch (a)
        {
        case 1:
            if (left.first < x) left.first = x;
            break;
        case 2:
            if (right.first > x) right.first = x;
            break;
        case 3:
            if (left.second < y) left.second = y;
            break;
        case 4:
            if (right.second > y) right.second = y;
            break;
        
        default:
            break;
        }
    }

    // cout << "(" << left.first << ", " << left.second << ")" << endl;
    // cout << "(" << right.first << ", " << right.second << ")" << endl;

    int x_l = right.first-left.first;
    int y_l = right.second-left.second;
    if (x_l > 0 && y_l > 0) cout << x_l*y_l << endl;
    else cout << 0 << endl;
    
    return 0;
}