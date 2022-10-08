// Problem Link: https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
  int n, m, a;
  cin >> n >> m >> a;
  
  long long x = n / a, y = m / a, sum;

  if (n % a != 0) x++;
  if (m % a != 0) y++;

  sum = x * y;
  
  cout << sum;

  return 0;
}