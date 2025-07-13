#include<bits/stdc++.h>
#define int long long int
using namespace std;

void findPair(int n, int a, int b) {
    if(a + b > n) {
        cout << "NO" << endl; 
        return;
    } 
    if(a == 0 && b >= 1) {
        cout << "NO" << endl;
        return;
    }
    if(b == 0 && a >= 1) {
        cout << "NO" << endl;
        return;
    }
    vector<int>resA;
    vector<int> resB;
    int ties = n - (a + b);
    for(int i = 1; i <= ties; i++) {
        resA.push_back(i);
        resB.push_back(i);
    } 
    if(a > 0) {
        for(int i = n; i > (n - a); i--) resA.push_back(i);
        for(int i = ties + a; i >= ties + 1; i--) resB.push_back(i); 
    }
    if(b > 0) {
        for(int i = ties + b; i >= ties + 1; i--) resA.push_back(i);
        for(int i = n; i > ties + a; i--) resB.push_back(i);
    }
    cout << "YES" << endl;
    for(auto x : resA) cout << x << " ";
    cout << endl;
    for(auto x : resB) cout << x << " ";
    cout << endl; 
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        findPair(n, a, b);
    }
    return 0;
}