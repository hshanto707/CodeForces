// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // FIRST HALF

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (2 * n - 1); j++)
    {
      if (j >= (n - i + 1) && j <= (n + i - 1))
      {
        cout << "*";
      }
      else if (j < n)
      {
        cout << " ";
      }
    }

    cout << '\n';
  }

  // SECOND HALF

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (2 * n - 1); j++)
    {
      if (j >= i && j <= (2 * n - i))
      {
        cout << "*";
      }
      else if (j < n)
      {
        cout << " ";
      }
    }

    cout << '\n';
  }

  return 0;
}