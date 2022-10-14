// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define ppf pop_front

int main() {
  int n, q; cin >> n >> q;
  vector<int> arr(n);
  vector<int> val(q);
  
  for (int i = 0; i < n; i++) cin >> arr[i];
  for (int i = 0; i < q; i++) cin >> val[i];
  
  sort(arr.begin(), arr.end());

  for (int i = 0; i < q; i++) {
    if (binary_search(arr.begin(), arr.end(), val[i])) cout << "found" << nl;
    else cout << "not found" << nl;
  }

  return 0;
}
