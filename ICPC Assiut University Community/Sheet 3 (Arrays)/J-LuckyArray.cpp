// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int min = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == min)
    {
      cnt++;
    }
  }

  if (cnt % 2 == 0)
  {
    cout << "Unlucky" << '\n';
  }
  else
  {
    cout << "Lucky" << '\n';
  }

  return 0;
}