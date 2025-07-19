#include<bits/stdc++.h>
#define int long long int
using namespace std;

void dfs(int i, int j, int n, int m, vector<vector<char>> & arr , vector<vector<bool>> & visited) {
    visited[i][j] = true;
    int dx[] = {1, 0, 0, -1};
    int dy[] = {0, 1, -1, 0};
    for(int k = 0; k < 4; k++) {
        int nx = i + dy[k];
        int ny = j + dx[k];
        if(nx < n && nx >= 0 && ny >= 0 && ny < m && arr[nx][ny] == '.' && !visited[nx][ny]) {
            dfs(nx, ny, n, m, arr, visited);
        }
    }
    return;
}



int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr (n, vector<char>(m, '.'));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == '.' && !visited[i][j]) {
                cnt++;
                dfs(i, j, n, m, arr, visited);
            }  
        }
    }
    cout << cnt << endl;

    return 0;
}