// Problem Link: https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n;
  float total = 0;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int amount;
    cin >> amount;

    total += amount;
  }

  cout << total / n << nl;

  return 0;
}
