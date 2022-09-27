// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int cnt = 0;
  bool isOperation = true;
  int j = 0;

  while (isOperation && arr[j] >= 1) {
    if (arr[j] % 2 != 0) {
      isOperation = false;
    } else {
      arr[j] = arr[j] / 2;
      cnt++;
      cout << "25 got hit - " << arr[j] << " | " << j << '\n';
    }
    
    if (j <= n - 1) {
      j++;
    } else if (j == n - 1) {
      j = 0;
    }
  }

  // for (int i = 0; i < n; i++) {
  //   if (arr[i] > 0 && arr[i] % 2 == 0) {

  //   }
  // }

  cout << cnt << '\n';

  return 0;
}