// Problem Link: https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, total = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0)
      total -= i;
    else
      total += i;
  }

  cout << total;

  return 0;
}
486A - Calculating Function