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
    set<int> st;

    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        st.insert(p);
    }
    cout << st.size() << endl;
    return 0;
}