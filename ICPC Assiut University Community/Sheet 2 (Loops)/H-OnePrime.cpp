// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <iostream>
using namespace std;

void getPrime(int num)
{
  bool isPrime = true;

  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
    }
  }

  if (isPrime)
  {
    cout << num << ' ';
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    getPrime(i);
  }

  return 0;
}