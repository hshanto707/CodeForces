// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    int num; cin >> num;

    if (num >= 2) {
      arr[i] = 1;
    } else if (num < 0) {
      arr[i] = 2;
    } else {
      arr[i] = num;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  cout << '\n';

  return 0;
}