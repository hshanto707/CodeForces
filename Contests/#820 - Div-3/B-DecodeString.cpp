// Problem Link: https://codeforces.com/contest/1729/problem/B

#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int n; cin >> n;

    string arr[n];

    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int k = 0; k < n; k++) {
      for (int j = 1; j < n; j++) {
        if (arr[j] == 0) {
          cout << arr[i] << el;
        }
      }
    }
  }

  return 0;
}