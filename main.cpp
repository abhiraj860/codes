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

    int t;
    cin >> t;
    vector<pair<int, int>> arr;
    while(t--) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }
    sort(arr.begin(), arr.end(), compare);
    int act = 1;
    int end = arr[0].second;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i].first >= end) act++, end = arr[i].second; 
    }
    cout << act << endl;
    return 0;
}