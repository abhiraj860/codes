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
    int ans = 1;
    int mod = 1e9 + 7;
    for (int i = 0; i < n; i++) {
        ans = ((ans % mod) * 2) % mod;
    }
    cout << ans  << endl;
    return 0;
}