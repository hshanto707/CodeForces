// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <iostream>
using namespace std;

int main()
{
  char a, b;

  cin >> a;

  int ascii = a;

  if (ascii > 64 && ascii < 91)
  {
    b = ascii + 32;
    cout << b << '\n';
  }
  else if (ascii > 96 && ascii < 123)
  {
    b = ascii - 32;
    cout << b << '\n';
  }

  return 0;
}