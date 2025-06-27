#include<bits/stdc++.h>
#define int long long int
using namespace std;

int countingSetBits(int n) {
    int ans = 0;
    while(n > 0) {
        if(n & 1) ans++;
        n = n >> 1;
    }
    return ans;
}

int countingSetBitsN(int n) {
    int ans = 0;
    while (n > 0) {
        n = n & (n - 1);
        ans++;
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
    cout << countingSetBitsN(n) << endl;
    return 0;
}