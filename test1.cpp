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
    vector<int> arr = {2, 1, 8, 6, -2, 5, 3, 0};
    unordered_set<int>st; 
    int sum = 8;
    for(int i = 0; i < arr.size(); i++) {
        int x = sum - arr[i];
        if(st.find(x) != st.end()) {
            cout << x << ", " << arr[i] << endl;
            st.erase(x);
        } else {
            st.insert(arr[i]);
        }
    }
    return 0;
}