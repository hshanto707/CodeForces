// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int sum = 0, sumEven = 0, sumOdd = 0;

  for (int i = min(a, b); i <= max(a, b); i++)
  {
    sum += i;

    if (i % 2 == 0)
    {
      sumEven += i;
    }
    if (i % 2 == 1)
    {
      sumOdd += i;
    }
  }

  cout << sum << '\n';
  cout << sumEven << '\n';
  cout << sumOdd << '\n';

  return 0;
}