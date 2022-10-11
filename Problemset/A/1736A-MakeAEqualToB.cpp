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
  int c = 0, s = 0;

  vector<int> b(n);
  vector<int> a(n);

  for (int i = 0; i < n; ++i) a[i] = in();

  for (int i = 0; i < n; ++i) {
    b[i] = in(); 
    s+=abs(a[i]-b[i]);
    c+=a[i];
    c-=b[i];
  }

  cout << min(s,abs(c)+1) << nl;

  return 0;
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  return 0;
}
