#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int n;
    cin >> n;
    int ms = INT_MIN;
    int cs = 0;
    cout << n << endl;
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