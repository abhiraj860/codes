#include<bits/stdc++.h>
#define int long long int
using namespace std;

string twoPower(int n) {
    if((n & (n - 1)) == 0) return "Power of Two";
    return "Not a power of two";
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    cout << twoPower(n) << endl;
    return 0;
}