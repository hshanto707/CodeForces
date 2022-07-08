// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

#include <iostream>
using namespace std;

int main()
{
  int l1, r1, l2, r2;

  cin >> l1 >> r1 >> l2 >> r2;

  if (l1 <= l2 && r1 >= l2 && r1 <= r2)
  {
    cout << l2 << ' ' << r1 << '\n';
  }
  else if (l1 <= l2 && r1 >= r2)
  {
    cout << l2 << ' ' << r2 << '\n';
  }
  else if (l1 >= l2 && r1 <= r2)
  {
    cout << l1 << ' ' << r1 << '\n';
  }
  else if (l1 >= l2 && l1 <= r2 && r1 >= r2)
  {
    cout << l1 << ' ' << r2 << '\n';
  }
  else
  {
    cout << -1 << '\n';
  }

  return 0;
}