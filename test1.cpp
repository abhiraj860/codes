#include<bits/stdc++.h>
#define int long long int
using namespace std;

int getCount(vector<int> & arr, int p) {
    int cnt = 0;
    int i = 0;
    int j = arr.size() - 1;
    while(i < j) {
        int curr = 0;
        while(curr <= p) {
            curr += arr[j];
            curr += arr[j];
        }
    }
}



int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, p;
    cin >> n >> p;
    vector<int>arr;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int cnt = getCount(arr, p);
    cout << cnt << endl;
    return 0;
}