// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <iostream>
using namespace std;
 
int main()
{
  int n, num, even = 0, odd = 0, positive = 0, negative = 0;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> num;

    if (num % 2 == 0 || num == 0) {
      even++;
    } else if (num % 2 != 0 && num != 0) {
      odd++;
    }

    if (num > 0) {
      positive++;
    } else if (num < 0) {
      negative++;
    }
  }

  cout << "Even: " << even << '\n';
  cout << "Odd: " << odd << '\n';
  cout << "Positive: " << positive << '\n';
  cout << "Negative: " << negative << '\n';
 
  return 0;
}