// Problem Link: https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main() {
    int n, i, petya, vasya, tonya;
    int question = 0;
    
    cin >> n;
    
    for(i = 1; i <= n; i++) {
        cin >> petya >> vasya >> tonya;
        
        int total = petya + vasya + tonya;
        
        if (total >= 2) {
            question++;
        }
    }
    
    cout << question << nl;
    
    return 0;
}