// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b;

  cin >> a >> b;

  cout << "floor " << a << " / " << b << " = " << floor(a / b) << '\n';
  cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << '\n';
  cout << "round " << a << " / " << b << " = " << round(a / b) << '\n';

  return 0;
}