// Problem Link: https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, h;
  cin >> n >> h;
  int w = 0;

  for (int i = 1; i <= n; i++)
  {
    int nh;
    cin >> nh;

    if ((nh / h) == 0)
    {
      w++;
    }
    else
    {
      w += ceil(((float)nh / h));
    }
  }

  cout << w;

  return 0;
}
