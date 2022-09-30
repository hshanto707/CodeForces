// Problem Link: https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, m = 0;
  cin >> n;
  int inside = 0;

  for (int i = 1; i <= n; i++)
  {
    int a, b;
    cin >> a >> b;
    inside -= a;
    inside += b;
    if (inside > m)
      m = inside;
  }

  cout << m << nl;

  return 0;
}