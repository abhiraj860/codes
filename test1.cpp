#include<bits/stdc++.h>
#define int long long int
using namespace std;

int earthLevels(int n) {
    int ans = 0;
    while (n > 0) {
        ans++;
        n = n & (n - 1);
    }
    return ans;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << earthLevels(n) << endl;
    return 0;
}