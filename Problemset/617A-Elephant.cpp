// Problem Link: https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, steps = 0;
  cin >> n;

  if (n <= 5)
    cout << 1 << nl;
  else
  {
    int i = 5;
    while (n != 0 && i > 0)
    {
      steps += n / i;
      n -= (n / i) * i;
      i--;
    }
    cout << steps << nl;
  }

  return 0;
}