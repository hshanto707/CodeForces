// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <iostream>
using namespace std;

void getFact(int x)
{
  long long int fact = 1;

  for (int i = 1; i <= x; i++)
  {
    fact = fact * i;
  }

  cout << fact << "\n";
}

int main()
{
  long long int n, num;

  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> num;

    getFact(num);
  }

  return 0;
}