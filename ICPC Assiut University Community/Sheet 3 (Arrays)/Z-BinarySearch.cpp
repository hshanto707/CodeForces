// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <iostream>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    // cout << "first loop" << '\n';
  }

  for (int i = 0; i < q; i++)
  {
    int num;
    cin >> num;
    bool isFound = false;

    // cout << "second loop" << '\n';

    for (int j = 0; j < n; j++)
    {
      // cout << "third loop" << '\n';
      if (arr[j] == num)
      {
        isFound = true;
        break;
      }
    }

    if (isFound)
    {
      cout << "found" << '\n';
    }
    else
    {
      cout << "not found" << '\n';
    }
  }

  return 0;
}