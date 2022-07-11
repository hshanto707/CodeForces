// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <iostream>
using namespace std;

int main()
{
  int n, a, b; cin >> n >> a >> b;

  int sums = 0;

  for (int i = 1; i <= n; i++) {
    int sum = 0;
    int num = i;

    while (num != 0) {
      sum = sum + num % 10;
      num = num / 10;
    }

    if (sum >= min(a, b) && sum <= max(a, b)) {
      sums = sums + i;
    }
  }

  cout << sums << '\n';

  return 0;
}