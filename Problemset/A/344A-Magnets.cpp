// Problem Link: https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, cnt = 1, curr = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int pole;
    cin >> pole;
    if (curr == 0)
      curr = pole;
    if (curr != pole) {
      cnt++;
      curr = pole;
    }
  }

  cout << cnt;

  return 0;
}