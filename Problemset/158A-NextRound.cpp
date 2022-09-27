// Problem Link: https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, k; cin >> n >> k;
  int cnt = 0, arr[100];

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  for (int i = 1; i <= n; i++) {
    if (arr[i] > 0 && arr[i] >= arr[k]) cnt++;
  }

  cout << cnt << nl;

  return 0;
}