// Problem Link: https://codeforces.com/contest/1472/problem/B

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    int n;
    cin >> n;

    int tw = 0, sm = 0, lg = 0;

    for (int j = 1; j <= n; j++)
    {
      int w;
      cin >> w;

      tw += w;

      if (w == 1) sm++;
      else lg++;
    }

    if (tw % 2 == 0) {
      int alice = tw / 2;
      while (alice >= 2 && lg > 0) {
        alice -= 2;
        lg--;
      }
      while (alice >= 1 && sm > 0) {
        alice--;
        sm--;
      }

      if (alice == 0) cout << "YES" << nl;
      else cout << "NO" << nl;
    }
    else
      cout << "NO" << nl;
  }

  return 0;
}