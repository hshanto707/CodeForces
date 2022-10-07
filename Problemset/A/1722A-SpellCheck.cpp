// Problem Link: https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int t;
  cin >> t;
  string name = "Timur";
  sort(name.begin(), name.end());

  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    cout << (s == name ? "YES" : "NO") << nl;
  }

  return 0;
}