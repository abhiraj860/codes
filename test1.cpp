#include<bits/stdc++.h>
#define int long long int
using namespace std;

int powerFunc(int a, int n) {
    if(a == 0) return 0;
    if(n == 0) return 1;
    int ans;
    if(n & 1) ans = a * powerFunc(a, n / 2) * powerFunc(a, n/2);
    else ans = powerFunc(a, n/2) * powerFunc(a, n/2);
    return ans;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a, n;
    cin >> a >> n;
    cout << powerFunc(a, n) << endl;
    return 0;
}