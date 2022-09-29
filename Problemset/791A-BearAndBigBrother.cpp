// Problem Link: https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int a, b, cnt = 0;
  cin >> a >> b;

  while (b >= a)
  {
    a *= 3;
    b *= 2;

    cnt++;
  }

  cout << cnt << nl;

  return 0;
}