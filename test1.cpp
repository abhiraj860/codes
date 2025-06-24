#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int res = n * (n + 1) / 2;
    if(res & 1) {
        cout << "NO" << endl;
    } else {
        int reqSum = res / 2;
        vector<int> a;
        vector<int> b;
        for(int i = n; i >= 1; i--) {
            if(reqSum - i >= 0) a.push_back(i), reqSum = reqSum - i;
            else  b.push_back(i);
        }
        cout << "YES" << endl;
        cout << a.size() << endl;
        for(auto x:a) cout << x << " ";
        cout << endl;
        cout << b.size() << endl;
        for(auto x:b) cout << x << " ";
    }   

    return 0;
}