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
    vector<pair<int, int>> inp = {{7, 9}, {0, 10}, {4, 5}, {8, 9}, {4, 10},{5, 7}};
    sort(inp.begin(), inp.end(), compare);
    int end = inp[0].second;
    int cnt = 1;
    for(int i = 1; i < inp.size(); i++) {
        if (inp[i].first >= end) {
            cnt++;
            end = inp[i].second;
        }
    }
    cout << cnt << endl;
    return 0;
}