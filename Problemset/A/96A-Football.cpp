// Problem Link: https://codeforces.com/contest/96/problem/A

#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
 
int main()
{
  string s;
  cin >> s;
  int cnt = 1;
  char first = s[0];
 
  for (int i = 1; i < s.size(); i++) {
    if (cnt >= 7) break;
    if (s[i] == first) cnt++;
    else {
      cnt = 1;
      first = s[i];
    }
  }
 
  if (cnt >= 7) cout << "YES";
  else cout << "NO";
 
  return 0;
}