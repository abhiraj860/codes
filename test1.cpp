#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {5, 4, 3, 2, 1};
    sort(arr.begin(), arr.end(), compare);
    for(auto x : arr) cout << x << endl; 
    return 0;
}