#include<bits/stdc++.h>
#define int long long int
using namespace std;

void printMat(vector<vector<int>> & arr) {
    int row = arr.size();
    int col = arr[0].size();
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void findCount(vector<vector<int>> & arr, int row, int col) {
    queue<pair<int, int>> que;
    que.push({0, 0});
    while(!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        int dx[] = { 2, 2, -2, -2, -1, 1, 1, -1};
        int dy[] = {-1, 1, -1,  1, -2, -2, 2, 2};
        for(int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < col && ny >= 0 && ny < row) {
                if(arr[nx][ny] == -1) arr[nx][ny] = arr[x][y] + 1, que.push({nx, ny});
            }
        }
    }
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, -1));
    arr[0][0] = 0;
    findCount(arr, n, n);
    printMat(arr);
    return 0;
}