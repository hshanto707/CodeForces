// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long double a, c, b, d, pow1, pow2;

  cin >> a >> b >> c >> d;

  long double new_b = (long double)b / 10000000000000;
  long double new_d = (long double)d / 10000000000000;

  pow1 = pow(a, new_b);
  pow2 = pow(c, new_d);

  if (pow1 > pow2)
  {
    cout << "YES" << '\n';
  }
  else
  {
    cout << "NO" << '\n';
  }

  return 0;
}