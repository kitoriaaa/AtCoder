#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> vec_no;
  set<string> vec_bad;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if (s[0] == '!') {
      vec_bad.insert(s.substr(1));
    } else {
      vec_no.insert(s);
    }
  }

  string result = "satisfiable";
  for (auto s : vec_no) {
    if (vec_bad.find(s) != vec_bad.end()) {
      result = s;
      break;
    }
  }

  cout << result << endl;
  return 0;
}
