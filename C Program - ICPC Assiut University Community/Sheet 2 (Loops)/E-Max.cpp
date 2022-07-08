// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <iostream>
using namespace std;

int main()
{
  int n, max = 0;

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int num;

    cin >> num;

    if (num > max)
    {
      max = num;
    }
  }

  cout << max << "\n";

  return 0;
}