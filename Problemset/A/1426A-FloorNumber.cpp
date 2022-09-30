// Problem Link: https://codeforces.com/problemset/problem/1426/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int n, x, floor = 2, cnt = 1;
    cin >> n >> x;

    if (n <= 2)
    {
      cout << 1 << nl;
    }
    else
    {
      while (n > floor)
      {
        floor += x;
        cnt++;
      }
      cout << cnt << nl;
    }
  }

  return 0;
}