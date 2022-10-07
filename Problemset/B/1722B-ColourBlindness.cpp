// Problem Link: https://codeforces.com/problemset/problem/1722/B

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int n;
    cin >> n;

    bool isSame = true;

    string row1, row2;
    cin >> row1 >> row2;

    for (int j = 0; j < n; j++)
    {
      if (row1[j] == 'G')
        row1[j] = 'B';
      if (row2[j] == 'G')
        row2[j] = 'B';
    }

    for (int j = 0; j < n; j++)
    {
      if (row1[j] != row2[j])
      {
        isSame = false;
        break;
      }
    }

    cout << (isSame ? "YES" : "NO") << nl;
  }

  return 0;
}