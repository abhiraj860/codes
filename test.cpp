#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> v1 = {1, 45, 54, 71, 78, 12};
    vector<int> v2 = {1, 7, 5, 4, 6, 12};
    map<int, bool> mp;
    for(auto x : v1) mp[x] = true;
    vector<int> v;
    for(auto x: v2) {
        if(mp[x]) v.push_back(x);
    }
    for(auto x : v) cout << x << endl;
    return 0;
}