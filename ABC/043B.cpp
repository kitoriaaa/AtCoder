#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;


int main() {
    string s;
    cin >> s;
    stack<string> stc;
    rep(i, s.size()) {
        if (s[i] == '0') stc.push("0");
        else if (s[i] == '1') stc.push("1");
        else if (s[i] == 'B' && !stc.empty()) stc.pop(); 
    }

    string str = "";
    while (!stc.empty()) {
        str += stc.top();
        stc.pop();
    }

    reverse(all(str));
    cout << str << endl;

    return 0;
}
