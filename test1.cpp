#include<bits/stdc++.h>
#define int long long int
using namespace std;

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        // cout << n << endl;
        return n;
    } 
    
    int ans = fibonacci(n - 1) + fibonacci(n - 2);  
    // cout << ans << endl;
    return ans;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}