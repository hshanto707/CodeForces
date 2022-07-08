// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <iostream>
using namespace std;

int main()
{
  int n, rev = 0;

  cin >> n;

  int num = n;

  while (n != 0)
  {
    rev = (rev * 10) + (n % 10);
    n = n / 10;
  }

  cout << rev << '\n';

  if (num == rev)
  {
    cout << "YES" << '\n';
  }
  else
  {
    cout << "NO" << '\n';
  }

  return 0;
}