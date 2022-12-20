// Problem Link: https://codeforces.com/problemset/problem/1729/A

#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;

    int time1 = abs(a - 1);
    int time2 = abs(b - c) + (c - 1);

    if (time1 < time2)
    {
      cout << 1 << el;
    }
    else if (time1 > time2)
    {
      cout << 2 << el;
    }
    else
    {
      cout << 3 << el;
    }
  }

  return 0;
}