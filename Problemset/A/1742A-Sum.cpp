// Problem Link: https://codeforces.com/problemset/problem/1742/A

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
  vector<int> v(3);

  for (int i = 0; i < 3; i++) v[i] = in();

  sort(v.begin(), v.end());

  if (v[2] == (v[0] + v[1])) cout << "YES" << nl;
  else  cout << "NO" << nl;

  return 0;
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  return 0;
}
