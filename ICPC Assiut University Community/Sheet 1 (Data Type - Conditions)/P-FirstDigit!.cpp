// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <iostream>
using namespace std;

int main()
{
  int a;

  cin >> a;

  while (a >= 10)
  {
    a /= 10;
  }

  if (a % 2 == 0)
  {
    cout << "EVEN" << '\n';
  }
  else
  {
    cout << "ODD" << '\n';
  }

  return 0;
}