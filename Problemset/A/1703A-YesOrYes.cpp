// Problem Link: https://codeforces.com/problemset/problem/1703/A

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
  string s;
  cin >> s;
  
  if (s[0] == 'y' || s[0] == 'Y') {
    if (s[1] == 'e' || s[1] == 'E') {
      if (s[2] == 's' || s[2] == 'S') {
        cout << "YES" << nl;
      } else cout << "NO" << nl;
    } else cout << "NO" << nl;
  } else cout << "NO" << nl;

  return 0;
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  return 0;
}
