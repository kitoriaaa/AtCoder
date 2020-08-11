#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool res = true;

    for (int i=s.size()-1; i >= 0; i--) {
        if ((s.size() >= 7) && (s.compare((s.size()-7), 7, "dreamer")==0)) {
            s.erase(s.size()-7);
            i = s.size();
        } else if ((s.size() >= 6) && (s.compare((s.size()-6), 6, "eraser")==0)) {
            s.erase(s.size()-6);
            i = s.size();
        } else if ((s.size() >= 5) && (s.compare((s.size()-5), 5, "dream") == 0)) {
            s.erase(s.size()-5);
            i = s.size();
        } else if ((s.size() >= 5) && (s.compare((s.size()-5), 5, "erase") == 0)) {
            s.erase(s.size()-5);
            i = s.size();
        } else {
            res = false;
            break;
        }
        if (s.size() == 0) break;
    }

    if (res) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

