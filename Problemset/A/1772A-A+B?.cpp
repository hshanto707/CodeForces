// Problem Link: https://codeforces.com/problemset/problem/1772/A

#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
 
int main() {
  int t; cin >> t;
  
  while(t--) {
    string s; cin >> s;
    cout << (s[0] - 48) + (s[2] - 48) << nl;
  }
 
  return 0;
}