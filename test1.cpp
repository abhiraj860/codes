#include<bits/stdc++.h>
#define int long long int
using namespace std;

int minMoves(vector<int> & vec, int n) {
    int moves = 0;
    for(int i = 1; i < n; i++) {
        if(vec[i] < vec[i - 1]) {
            int diff = (vec[i - 1] - vec[i]); 
            moves += diff;
            vec[i] += diff;
        }
    }
    return moves;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        arr.push_back(curr);
    }
    cout << minMoves(arr, n) << endl;
    return 0;
}