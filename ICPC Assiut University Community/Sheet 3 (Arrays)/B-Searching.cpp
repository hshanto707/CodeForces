// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

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

  int num;
  cin >> num;
  bool found = false;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == num)
    {
      cout << i << '\n';
      found = true;
      break;
    }
  }

  if (!found)
  {
    cout << -1 << '\n';
  }

  return 0;
}