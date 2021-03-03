#include <bits/stdc++.h>
using namespace std;

int main() {
    string t, s;
    cin >> t >> s;
    vector<int> vec(t.size()-s.size()+1);
    
    for (int i=0; i <= t.size() - s.size(); i++) {
        int cnt = 0;
        int j = 0;
        for (char c: s) {
            if (c != t[i+j]) cnt++;
            j++;
        }
        vec.at(i) = cnt;
    }
    sort(vec.begin(), vec.end());
    cout << vec.at(0) << endl; 
    return 0;
}

