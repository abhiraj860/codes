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
    
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << 0 << endl;
        } else if (i == 2) {
            cout << 6 << endl;
        } else {
            int n = i;
            int totWays = (n * n) * (n * n - 1) / 2;
            int notWays = 4 * (n - 1) * (n - 2);
            int reqdWays = totWays - notWays;
            cout << reqdWays << endl;
        }
    }

    return 0;
}