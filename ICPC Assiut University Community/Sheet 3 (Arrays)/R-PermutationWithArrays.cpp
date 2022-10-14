// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define ppf pop_front

int main() {
  int n; cin >> n;
  vector<int> v1(n);
  vector<int> v2(n);
  
  for (int i = 0; i < n; i++) cin >> v1[i];
  for (int i = 0; i < n; i++) cin >> v2[i];
  
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  if (v1 == v2) cout << "yes";
  else cout << "no";

  return 0;
}