#include <bits/stdc++.h>
using namespace std;

int calcSum(int num) {
  int dig, sum = 0;
  while (num) {
    dig = num % 10;
    sum = sum + dig;
    num = num / 10;
  }
  return sum;
}

int main() {
  int a, b;
  cin >> a >> b;
  int aSum, bSum;
  aSum = calcSum(a);
  bSum = calcSum(b);

  if (aSum >= bSum)
    cout << aSum << endl;
  else
    cout << bSum << endl;
  return 0;
}
