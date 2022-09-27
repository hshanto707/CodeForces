// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;
  int arr[n];
  bool isPalindrome = true;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int newArr[n];
  int j = 0;

  for (int i = n-1; i >= 0; i--) {
    newArr[j] = arr[i];
    j++;
  }

  for (int i = 0; i < n; i++) {
    if (newArr[i] != arr[i]) {
      isPalindrome = false;
    }
  }

  if (isPalindrome) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }

  return 0;
}