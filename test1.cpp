#include<bits/stdc++.h>
#define int long long int
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n - 1); 
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}