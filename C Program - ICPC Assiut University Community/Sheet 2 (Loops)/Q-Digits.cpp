// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int num;
    cin >> num;

    while (num != 0)
    {
      cout << num % 10 << ' ';
      num = num / 10;
    }
    cout << '\n';
  }

  return 0;
}