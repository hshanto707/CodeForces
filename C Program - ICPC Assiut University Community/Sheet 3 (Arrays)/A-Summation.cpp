// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int n; cin >> n;
  long long int sum = 0;

  for (int i = 1; i <= n; i++) {
    int a; cin >> a;
    sum += a;
  }

  cout << abs(sum) << '\n';

  return 0;
}