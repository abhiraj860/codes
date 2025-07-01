#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool compare(string x, string y) {
    return x + y < y + x;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<string> input = {"a", "ab", "aba"};
    sort(input.begin(), input.end(), compare);
    for(auto x : input) cout << x << "" ;
    return 0;
}