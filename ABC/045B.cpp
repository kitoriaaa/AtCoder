#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)        for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n)    for (int i = (s); i < (int)(n); i++)
#define all(a) a.begin(), a.end()
#define All(a) a.rbegin(), a.rend()
typedef vector<int> VI;
typedef long long int ll;



int main() {
    string sa, sb, sc;
    cin >> sa >>sb >> sc;
    
    int ia, ib, ic;
    ia = ib = ic = 0;
    
    char c = sa[ia];
    ia++;
    while (ia != sa.size()+1 && ib != sb.size()+1 && ic != sc.size()+1) {
        switch (c)
        {
        case 'a':
            if (ia == sa.size()) {
                cout << "A" << endl;
                return 0;
            }
            c = sa[ia];
            ia++;
            break;
        case 'b':
            if (ib == sb.size()) {
                    cout << "B" << endl;
                    return 0;
                }
            c = sb[ib];
            ib++;
            break;
        case 'c':
            if (ic == sc.size()) {
                    cout << "C" << endl;
                    return 0;
                }
            c = sc[ic];
            ic++;
            break;
        default:
            break;
        }
    }


    return 0;
}
