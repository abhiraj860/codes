#include<bits/stdc++.h>
#define int long long int
using namespace std;

int cntOnes(int num) {
    int cnt = 0;
    while(num > 0) {
        cnt++;
        num = num & (num - 1);
    }
    return cnt;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += cntOnes(i);
    }
    cout << ans;
    return 0;
}