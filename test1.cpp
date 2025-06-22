#include<bits/stdc++.h>
#define int long long int
using namespace std;

int mod = 10e9 + 7;

int cntZero(int n) {
    int denom = 5;
    int cnt = 0;
    while((n / denom) > 0) {
        cnt += (n / denom);
        denom *= 5;
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
    cout << cntZero(n) << endl;
    return 0;
}