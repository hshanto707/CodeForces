// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

#include <iostream>
using namespace std;

int main()
{
  char s; cin >> s;
  int n; cin >> n;

  for (int i = 1; i <= n; i++) {
    int num; cin >> num;

    for (int j = 1; j <= num; j++) {
      cout << s;
    }

    cout << '\n';
  }

  return 0;
}