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
    vector<int> arr = {1, 2, 3, 4, 5};

    int temp = 1;
    int n = arr.size();
    vector<int> output(n, 1);
    for(int i = 0; i < n; i++) {
        output[i] = temp;
        temp *= arr[i];
    }
    temp = 1;
    for(int i = n - 1; i >= 0; i--) {
        output[i] *= temp;
        temp *= arr[i];
    }
    for(auto x : output) cout << x << endl;
    return 0;
}