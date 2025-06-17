#include<bits/stdc++.h>
#define int long long int
using namespace std;

int ans = 0;

void cntHanoi(int n, vector<pair<int, int>> & vec, int from, int help, int to) {
    if (n == 0) return;
    cntHanoi(n - 1, vec, from, to, help);
    vec.push_back({from, to});
    ans++;
    cntHanoi(n - 1, vec, help, from, to);
}


int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    vector<pair<int, int>> vec;
    cin >> n;
    cntHanoi(n, vec, 1, 2, 3);
    cout << ans << endl;
    for(auto p : vec) cout << p.first << " " << p.second << endl; 
    return 0;
}