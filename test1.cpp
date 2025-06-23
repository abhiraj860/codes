#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {-1, 2, 3, 4, -2, 6, -8, 3};
    int ms = INT_MIN;
    int cs = 0;
    for(auto x : arr) {
        cs += x;
        ms = max(ms, cs);
        if(cs < 0) cs = 0;
    }
    cout << ms << endl;

    return 0;
}