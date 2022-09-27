// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int num;
    cin >> num;
    int bin = 0;

    while (num != 0) {
      if (num % 2 == 1) {
        bin++;
      }
      num = num / 2;
    }

    int dec = 0;
    
    for (int i = 0; i < bin; i++) {
      dec = dec + pow(2, i);
    }

    cout << dec << '\n';
  }

  return 0;
}