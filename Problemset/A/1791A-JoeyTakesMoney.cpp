// Problem Link: https://codeforces.com/problemset/problem/1731/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define ppf pop_front

void solve() {
  int n; cin >> n;
  vector <long long int> v;
  long long int sum = 0;

  for (int i = 0; i < n; i++) {
    long long int num; cin >> num;
    v.pb(num);
  }
    
  for (int j = 1; j < n; j++) {
    if (v[j] <= 1) continue;
    v[0] *= v[j];
    v[j] = 1;
  }

  for (int i = 0; i < n; i++) {
    sum += v[i];
  }

  cout << sum * 2022 << nl;
}

int main()
{
  int t; cin >> t;

  while (t--) solve();

  return 0;
}