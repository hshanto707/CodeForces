// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    long long min = 1e17;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
      for (int j = i + 1; j <= n; j++)
      {
        int sum = arr[i - 1] + arr[j - 1] + j - i;

        if (sum < min)
        {
          min = sum;
        }
      }
    }

    cout << min;

    cout << endl;
  }

  return 0;
}