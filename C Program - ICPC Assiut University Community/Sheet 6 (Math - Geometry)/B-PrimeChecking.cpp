// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B

#include <iostream>
using namespace std;

int main()
{
  long long int n;
  cin >> n;

  bool isPrime = true;

  if (n > 1)
  {
    for (long long int i = 2; i < n; i++)
    {
      if (n % i == 0)
      {
        isPrime = false;
        break;
      }
      cout << "loop runing for " << i << " times" << '\n';
    }
  } else {
    isPrime = false;
  }

  if (isPrime)
  {
    cout << "YES" << '\n';
  }
  else
  {
    cout << "NO" << '\n';
  }

  return 0;
}