// Problem Link: https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define lli long long int
#define pb push_back
#define ppb pop_back
#define ppf pop_front

void solve() {
  int n; cin >> n;
  int num = 0;

  for (int i = 1; i <= n; i++) {
    string s; cin >> s;

    if (s == "++X" || s == "X++") num++;
    else num--;
  }

  cout << num << nl;
}

int main() {
  solve();

  return 0;
}