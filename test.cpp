#include<bits/stdc++.h>
#define int long long int
using namespace std;

int joinRopes(vector<int> & arr, int n) {
    int maxS = 0;
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
    while(pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int rope = a + b;
        maxS += rope;
        pq.push(rope);
    }
    return maxS;
}


int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n = 4;
    vector<int> arr = {4, 3, 2, 6};
    cout << joinRopes(arr, n) << endl;

    return 0;
}