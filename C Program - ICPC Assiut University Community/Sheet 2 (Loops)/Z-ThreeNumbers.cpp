// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <iostream>
using namespace std;
int main()
{
  int k, s;

  cin >> k >> s;
  int cnt = 0;

  for (int x = 0; x <= k; x++) {
    for (int y = 0; y <= k; y++) {
      int z = s - x -y;
      if (z >= 0 && z <= k) {
        cnt++;
      }
    }
  }
  cout << cnt << '\n';

  return 0;
}