// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <iostream>
using namespace std;

int main()
{
  long long int a, b, c, d, mul, mul1, mul2;

  cin >> a >> b >> c >> d;

  mul1 = a * b;
  mul2 = c * d;

  mul = (mul1 % 100) * (mul2 % 100);

  int result = mul % 100;

  if (result < 10)
  {
    cout << "0" << result << '\n';
  }
  else
  {
    cout << result << '\n';
  }

  return 0;
}