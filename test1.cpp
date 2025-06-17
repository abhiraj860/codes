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
    int ans = 0;
    for (int i = 1; i <= n - 1; i++) {
        int p;
        cin >> p;
        ans ^= p; 
        ans ^= i;
    }
    ans ^= n;
    cout << ans;
    return 0;
}