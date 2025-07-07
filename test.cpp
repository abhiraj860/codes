#include<bits/stdc++.h>
#define int long long int
using namespace std;

int countWays(int n) {
    if(n < 0) return 0;
    if(n == 1 || n == 0) return 1;
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;
    cout << countWays(n) << endl;

    return 0;
}