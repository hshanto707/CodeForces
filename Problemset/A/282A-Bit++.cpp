// Problem Link: https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, x = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    string stat; cin >> stat;

    if (stat == "X++" || stat == "++X")
      x++;
    else if (stat == "X--" || stat == "--X")
      x--;
  }

  cout << x << nl;

  return 0;
}