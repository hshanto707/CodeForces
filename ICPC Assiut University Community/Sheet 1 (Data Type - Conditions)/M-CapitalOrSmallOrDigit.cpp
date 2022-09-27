// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <iostream>
using namespace std;

int main()
{
  char a;

  cin >> a;

  int ascii = a;

  if (ascii > 47 && ascii < 58)
  {
    cout << "IS DIGIT" << '\n';
  }
  else if (ascii > 64 && ascii < 91)
  {
    cout << "ALPHA" << '\n';
    cout << "IS CAPITAL" << '\n';
  }
  else if (ascii > 96 && ascii < 123)
  {
    cout << "ALPHA" << '\n';
    cout << "IS SMALL" << '\n';
  }

  return 0;
}