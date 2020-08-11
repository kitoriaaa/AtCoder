#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;
    
    int total=0;
    int bill[3] = {-1, -1, -1};

    for (int a=0; a <= n; a++) {
        for (int b=0; a+b <= n; b++) {
            total = 10000*a+5000*b+1000*(n-(a+b));
            if (total==y) {
                bill[0] = a;
                bill[1] = b;
                bill[2] = n-(a+b);
                break;
            }
        }
    }
    cout << bill[0] << ' ' << bill[1] << ' ' << bill[2] << endl;
    return 0;
}