#include<bits/stdc++.h>
#define int long long int
using namespace std;

int spiralNumber(int row, int col, int spiralNum) {
    if(row == 1 && col == 1) return 1;
    int start = (spiralNum - 1) * (spiralNum - 1) + 1;
    int end = spiralNum * spiralNum;

    if(spiralNum & 1) {
        if(row == spiralNum) return start + (col - 1);
        else return end - (row - 1);    
    } else {
        if(row == spiralNum) return end - (col - 1);
        else return start + (row - 1);
    }
    return -1;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--) {
        int row, col;
        cin >> row >> col;
        int spiralNum = max(row, col);
        cout << spiralNumber(row, col, spiralNum) << endl;
    }    
    return 0;
}