// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <iostream>
using namespace std;

int main()
{
  int a = 1, b = 1;

  while (a > 0 && b > 0)
  {
    cin >> a >> b;
    int sum = 0;

    if (a <= 0 || b <= 0)
    {
      return 0;
    }
    else
    {
      for (int i = min(a, b); i <= max(a, b); i++)
      {
        sum += i;
        cout << i << ' ';
      }
    }

    cout << "sum =" << sum << '\n';
  }

  return 0;
}