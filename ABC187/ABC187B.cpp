#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> vec;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    vec.emplace_back(make_pair(x, y));
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      double grad = double((get<1>(vec[j]) - get<1>(vec[i]))) /
                    (get<0>(vec[j]) - get<0>(vec[i]));
      if (grad >= -1 && grad <= 1) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
