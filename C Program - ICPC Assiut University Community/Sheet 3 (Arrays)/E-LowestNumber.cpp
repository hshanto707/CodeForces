// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <iostream>
using namespace std;
int main()
{
  int n; cin >> n;

  int a[n+10];

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int mn = 1e9;
  int index;

  for (int i = 1; i <= n; i++) {
    mn = min(mn, a[i]);
  }

  for (int i = 1; i <= n; i++) {
    if (a[i] == mn) {
      index = i;
      break;
    }
  }

  cout << mn << ' ' << index << '\n';

  return 0;
}