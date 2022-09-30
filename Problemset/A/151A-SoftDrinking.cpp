// Problem Link: https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int TotalMl = (k * l) / nl;
  int TotalSlice = c * d;
  int TotalSalt = p / np;

  cout << min(((k * l) / nl), min((c * d), (p / np))) / n << '\n';

  return 0;
}