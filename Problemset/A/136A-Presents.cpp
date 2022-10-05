// Problem Link: tps://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    int idx;
    cin >> idx;
    arr[idx - 1] = i+1;
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}