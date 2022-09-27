// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  long long int dif;

  cin >> a >> b >> c >> d;

  dif = (long long)a * b - (long long)c * d;

  cout << "Difference = " << dif << "\n";

  return 0;
}