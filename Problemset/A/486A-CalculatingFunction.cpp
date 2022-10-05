// Problem Link: https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  long long n;
  cin >> n;

  if (n % 2 == 0)
    cout << n / 2 << nl;
  else
    cout << -1 * ((n+1) / 2) << nl;
  return 0;
}