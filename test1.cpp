#include<bits/stdc++.h>
#define int long long int
using namespace std;

int minDiffFunc(vector<int> & arr, int minDiff) {
    int n = arr.size();
    for(int i = 0; i <= ((1 << n) - 1); i++) {
        int a = 0;
        int b = 0;
        int pos = 0;
        int temp = i;
        while(pos < n) {
            if(temp & 1) {
                a += arr[pos];
            } else {
                b += arr[pos];
            } 
            temp = temp >> 1;
            pos++;
        }
        int current = abs(a - b);
        minDiff = min(minDiff, current);
    }
    return minDiff;
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
        int p;
        cin >> p;
        arr.push_back(p);
    }    
    int minDiff = INT_MAX;
    cout << minDiffFunc(arr, minDiff) << endl;
    return 0;
}