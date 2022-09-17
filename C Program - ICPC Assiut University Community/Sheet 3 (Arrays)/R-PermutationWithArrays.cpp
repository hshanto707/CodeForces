// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;
  int A[n];
  int B[n];

  bool isAvailable = false;

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> B[i];

    for (int j = 0; j < n; j++) {
      if (B[i] == A[j]) {
        isAvailable = true;
        break;
      } else {
        isAvailable = false;
        continue;
      }
    }
  }

  if (isAvailable) {
    cout << "yes" << '\n';
  } else {
    cout << "no" << '\n';
  }

  return 0;
}