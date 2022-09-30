// Problem Link: https://codeforces.com/problemset/problem/1692/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int arr[4], cnt = 0;
    
    for (int i = 0; i < 4; i++) {
      cin >> arr[i];
    }

    for (int j = 1; j < 4; j++) {
      if (arr[j] > arr[0]) cnt ++;
    }

    cout << cnt << nl;
  }

  return 0;
}