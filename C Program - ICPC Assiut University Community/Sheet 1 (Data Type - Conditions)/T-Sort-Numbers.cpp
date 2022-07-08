// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  int first, second, third;

  cin >> a >> b >> c;

  if (a >= b && a >= c)
  {
    first = a;

    if (b >= c)
    {
      second = b;
      third = c;
    }
    else
    {
      second = c;
      third = b;
    }
  }
  else if (b >= a && b >= c)
  {
    first = b;

    if (a >= c)
    {
      second = a;
      third = c;
    }
    else
    {
      second = c;
      third = a;
    }
  }
  else if (c >= a && c >= b)
  {
    first = c;

    if (a >= b)
    {
      second = a;
      third = b;
    }
    else
    {
      second = b;
      third = a;
    }
  }

  cout << third << '\n'
       << second << '\n'
       << first << '\n'
       << '\n';
  cout << a << '\n'
       << b << '\n'
       << c << '\n';

  return 0;
}