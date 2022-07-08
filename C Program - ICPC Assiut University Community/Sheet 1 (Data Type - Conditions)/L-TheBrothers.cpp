// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first1, last1;
  string first2, last2;

  cin >> first1 >> last1;
  cin >> first2 >> last2;

  if (last1 == last2)
  {
    cout << "ARE Brothers" << '\n';
  }
  else
  {
    cout << "NOT" << '\n';
  }

  return 0;
}