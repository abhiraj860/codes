#include<bits/stdc++.h>
#define int long long int
using namespace std;


bool permute(vector<int> & vec, int n) {
    if(n == 1) {
        vec.push_back(n);
        return true;
    }
    for (int i = 2; i <= n; i += 2) vec.push_back(i);
    if(vec.back() - 1 <= 1) return false; 
    for (int i = 1; i <= n; i += 2) vec.push_back(i);
    return true;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<int> vec;
    
    bool res = permute(vec, n);
    
    if(res) {
        for (auto x : vec) cout << x << " "; 
    } else {
        cout << "NO SOLUTION";
    }
    return 0;
}