// Problem Link: https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main() {
  int n; cin >> n;
  int cnt = 0;
  int coinVal = 0;
  vector <int> v;

  while(n--) {
    int val; cin >> val;
    v.push_back(val);
  }

  sort(v.begin(), v.end(), greater<int>());

  int total = accumulate(v.begin(), v.end(), 0);

  for (int i = 0; i < v.size(); i++) {
    coinVal += v[i];

    cnt++;
    if (coinVal > total / 2) break;
  }

  cout << cnt;

  return 0;
}