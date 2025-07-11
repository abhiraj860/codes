#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        arr.push_back(p);
    } 
    for(auto x:arr) cout << x << endl;

    return 0;
}