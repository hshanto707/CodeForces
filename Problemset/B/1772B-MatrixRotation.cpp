// Problem Link: https://codeforces.com/contest/1472/problem/B

#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
 
bool isBeautiful (int a, int b, int c, int d) {
  if (a < b && a < c && b < d && c < d) return true;
  else return false;
}
 
int main() {
  int t; cin >> t;
  
  while(t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (isBeautiful(a, b, c, d)) cout << "YES" << nl;
    else if (isBeautiful(c, a, d, b )) cout << "YES" << nl;
    else if (isBeautiful(d, c, b, a )) cout << "YES" << nl;
    else if (isBeautiful(b, d, a, c )) cout << "YES" << nl;
    else cout << "NO" << nl;
  }
 
  return 0;
}