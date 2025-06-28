#include<bits/stdc++.h>
#define int long long int
using namespace std;

int findUnique(vector<int> & arr) {
    int ans = 0;
    for(auto x : arr) ans ^= x;  
    return ans;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {1, 3, 5, 4, 3, 1, 5, 4, 10};
    cout << findUnique(arr) << endl;
    return 0;
}