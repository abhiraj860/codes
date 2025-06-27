#include<bits/stdc++.h>
#define int long long int
using namespace std;

 int fastExponentiation(int a, int n) {
        int ans = 1;
        while(n > 0) {
            if(n & 1) ans = ans * a;
            a = a * a;
            n = n >> 1;
        }
        return ans;
    }

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin >> a;
    int n;
    cin >> n;
    cout << fastExponentiation(a, n) << endl;
    return 0;
}