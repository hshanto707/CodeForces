// Problem Link: https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, k; cin >> n >> k;
  int tl = 240 - k;
  int cnt = 0, tn = 0;

  for (int i = 1; i <= n; i++) {
    tn += i * 5;
    if (tn <= tl) cnt++;
    else break;
  }

  cout << cnt;

  return 0;
}
