#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int aoki_total = 0;
  vector<int> vec;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    aoki_total += x;
    vec.emplace_back(x + y);
  }

  int takahashi = 0;
  sort(vec.begin(), vec.end(), greater<int>());

  for (int i = 0; i < N; i++) {
    takahashi += vec[i];
    if (takahashi > ((aoki_total / 2) + 1)) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}
// 未完