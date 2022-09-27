// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string arr[100];

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    arr[i] = s;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i].size() <= 10)
    {
      cout << arr[i] << '\n';
    }
    else
    {
      cout << arr[i].front() << arr[i].size() - 2 << arr[i].back() << '\n';
    }
  }

  return 0;
}