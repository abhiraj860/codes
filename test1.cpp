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
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            set<int> st;
            for(int k = 0; k < j; k++) st.insert(arr[i][k]);
            for(int k = i - 1; k >= 0; k--) st.insert(arr[k][j]);
            int mex = 0;
            while(st.find(mex) != st.end()) mex++;
            arr[i][j] = mex;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}