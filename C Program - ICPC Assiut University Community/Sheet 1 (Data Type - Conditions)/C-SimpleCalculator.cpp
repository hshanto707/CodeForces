// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <iostream>
using namespace std;

int main()
{
  int x, y;
  int sum;
  long long int mul;
  int sub;

  cin >> x >> y;

  sum = x + y;
  mul = (long long) x * y;
  sub = x - y;
  
  cout << x << " + " << y << " = " << sum << "\n";
  cout << x << " * " << y << " = " << mul << "\n";
  cout << x << " - " << y << " = " << sub << "\n";
  
  return 0;
}