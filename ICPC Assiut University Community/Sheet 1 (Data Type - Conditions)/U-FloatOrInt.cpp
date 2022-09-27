// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <iostream>
using namespace std;

int main()
{
  float n, decimal;

  cin >> n;

  decimal = n - (int)n;

  if (decimal == 0)
  {
    cout << "int " << (int)n << '\n';
  }
  else
  {
    cout << "float " << (int)n << ' ' << decimal << '\n';
  }

  return 0;
}