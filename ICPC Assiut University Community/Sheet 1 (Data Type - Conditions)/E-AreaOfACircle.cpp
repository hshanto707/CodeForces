// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double r, area;
  double pie = 3.141592653;

  cin >> r;

  area = pie * (r * r);

  cout << setprecision(11) << area << "\n";

  return 0;
}