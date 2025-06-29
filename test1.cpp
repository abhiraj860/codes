#include<bits/stdc++.h>
#define int long long int
using namespace std;

int mod = 1e9 + 7;

int powerModulo(int a, int b) {
    if(a == 0) return 0;
    if(b == 0) return 1;
    int ans = 1;
    if(b & 1) {
        ans = ((a % mod) * powerModulo(a, b - 1)) % mod;
    } else {
        ans = ((powerModulo(a, b / 2) % mod) * (powerModulo(a, b / 2) % mod)) % mod;
    }
    return ans;
}


int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    cout << powerModulo(a, b) << endl;
    return 0;
}