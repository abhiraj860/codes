#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << n << " ";
    while (n > 1) {
        if (n & 1) n = 3 * n + 1;
        else n /= 2;
        cout << n << " "; 
        if (n == 1) break; 
    }
    // if (n == 1) cout << n;
    return 0;
}