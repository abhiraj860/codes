#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    unordered_set<int> st;
    for(auto x : arr) st.insert(x);
    int largest = 1;
    for(auto x : st) {
        int parent = x - 1;
        if(st.find(parent) == st.end()) {
            int currentLen = 0;
            int current = x;
            while(st.find(current) != st.end()) {
                currentLen++;
                current++;
            }
            largest = max(largest, currentLen);
        }
    }
    cout << largest << endl;

    return 0;
}