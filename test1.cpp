#include<bits/stdc++.h>
#define int long long int
using namespace std;

pair<int, int> search(int row, int col, vector<vector<int>> & arr, int val) {
    int m = row - 1;
    int n = 0;
    while(m >= 0 && n < col) {
        if(arr[m][n] == val) return {m, n};
        else if (arr[m][n] < val) n++;
        else m--;
    }
    return {-1, -1};
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int row = 3;
    int col = 3;
    vector<vector<int>> arr {{1,4,9},{2,5,10},{6,7,11}};
    pair<int, int> p = search(row, col, arr, 9);
    cout << p.first  << " " << p.second << endl;
    return 0;
}