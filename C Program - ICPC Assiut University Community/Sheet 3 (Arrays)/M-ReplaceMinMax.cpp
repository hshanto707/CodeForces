// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  // TAKING INPUT IN ARRAY

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // FINDING THE MINIMUM VALUE

  int min = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  // FINDING THE MAXIMUM VALUE

  int max = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  // REPLACING THE VALUE

  for (int i = 0; i < n; i++) {
    if (arr[i] == min) {
      arr[i] = max;
    } else if (arr[i] == max) {
      arr[i] = min;
    }
  }

  // PRINTING THE VALUE

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  cout << '\n';

  return 0;
}