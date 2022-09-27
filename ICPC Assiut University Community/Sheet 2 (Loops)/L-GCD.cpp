// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int max = 0;

  int x = a, y = b;

  for (int i = 1; i <= min(a, b); i++)
  {
    if (a % i == 0 && b % i == 0 && i > max)
    {
      max = i;
    }
  }

  cout << max << '\n';

  return 0;
}