// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;

  int num1 = 0;
  int num2 = 1;
  int next;

  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      cout << num1 << ' ';
      continue;
    }

    if (i == 2) {
      cout << num2 << ' ';
      continue;
    }

    next = num1 + num2;

    cout << next << ' ';

    num1 = num2;
    num2 = next;
  }

  return 0;
}