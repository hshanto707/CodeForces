// Problem Link: https://codeforces.com/problemset/problem/1736/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define ppf pop_front

inline int in(){
  int x;
  cin >> x;
  return x;
}

int solve() {
  int n = in();
  vector<int> v(n, 0);
  bool isBig = true;

  for (int i = 0; i < n; i++) v[i] = in();

  sort(v.begin(), v.end());

  if (n != 1) {
    for (int i = 1; i < n; i++) {
      if (v[i-1] >= v[i]) {
        isBig = false;
        break;
      }
    }
  }

  if (isBig || n == 1) cout << "YES" << nl;
  else  cout << "NO" << nl;

  return 0;
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  return 0;
}
