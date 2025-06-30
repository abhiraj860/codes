#include<bits/stdc++.h>
#define int long long int
using namespace std;

int frndPairing(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    return frndPairing(n - 1) + (n - 1) * frndPairing(n - 2);
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << frndPairing(n) << endl;
    return 0;
}