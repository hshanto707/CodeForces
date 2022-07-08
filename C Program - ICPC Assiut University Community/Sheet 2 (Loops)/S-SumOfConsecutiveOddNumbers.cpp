// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;

  for (int i = 1; i <= n; i++) {
    int x, y; cin >> x >> y;
    int sum = 0;

    for (int j = min(x, y); j <= max(x, y); j++) {
      if (j % 2 == 1 && j != x && j != y) {
        // cout << j << '\n';
        sum += j;
      }
    }

    cout << sum << '\n';
  }

  return 0;
}