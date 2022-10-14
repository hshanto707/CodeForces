// Problem Link: https://codeforces.com/problemset/problem/1703/B

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define ppf pop_front

int solve() {
  int n; cin >> n;
  string s; cin >> s;
  int cnt = 0;
  vector<bool> vec(26);

  for (int i = 0; i < n; i++) {
    int idx = s[i] - 65;
    if (!vec[idx]) {
      cnt += 2;
      vec[idx] = true;
    } else cnt++;
  }

  cout << cnt << nl;

  return 0;
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  return 0;
}
