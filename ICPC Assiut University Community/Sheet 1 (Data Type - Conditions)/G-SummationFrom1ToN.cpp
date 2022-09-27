// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <iostream>
using namespace std;

int main()
{
  long long int n, sum;

  cin >> n;

  sum = (n * (n + 1)) / 2;

  cout << sum << '\n';

  return 0;
}