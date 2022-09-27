// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <iostream>
using namespace std;

int main()
{
  int age, days = 0, months = 0, years = 0;

  cin >> age;

  while (age >= 365)
  {
    age -= 365;
    years++;
  }

  while (age >= 30)
  {
    age -= 30;
    months++;
  }

  days = age;

  cout << years << " years" << '\n';
  cout << months << " months" << '\n';
  cout << days << " days" << '\n';

  return 0;
}