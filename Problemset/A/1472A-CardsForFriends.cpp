// Problem Link: https://codeforces.com/contest/1472/problem/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int w, h, n;
    cin >> w >> h >> n;
    int sheet = 1, cnt = 0;

    while (w % 2 == 0) {
      w /= 2;
      sheet *= 2;
    }

    while (h % 2 == 0) {
      h /= 2;
      sheet *= 2;
    }

    if (n <= sheet)
      cout << "YES" << nl;
    else
      cout << "NO" << nl;
  }

  return 0;
}