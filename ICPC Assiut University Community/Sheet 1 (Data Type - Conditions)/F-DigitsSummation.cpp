// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <iostream>
using namespace std;

int main()
{
  long long int a, b, sum;

  cin >> a >> b;

  sum = (a % 10) + (b % 10);

  cout << sum << '\n';

  return 0;
}