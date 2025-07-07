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
    int ms = INT_MIN;
    int cs = 0;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        cs += p;
        ms = max(ms, cs);
        if(cs < 0) cs = 0;
    }
    cout << ms << endl;
    return 0;
}