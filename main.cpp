#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool dfs(int i, int j, int m, int n, vector<vector<char>> & mat, vector<vector<bool>> & visited, vector<char> &path, bool & found) {
    if(mat[i][j] == 'B') {
        found = true;
        return true;
    }
    visited[i][j] = true;
    int di[] = {0, 1, 0, -1};
    int dj[] = {1, 0, -1, 0};
    char dir[] = {'R', 'D', 'L', 'U'};
    for(int k = 0; k < 4; k++) {
        int nx = i + di[k];
        int ny = j + dj[k];
        if(nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && mat[nx][ny] != '#') {
            path.push_back(dir[k]);
            bool sub = dfs(nx, ny, m, n, mat, visited, path, found);
            if(sub) return true;
            path.pop_back();
        }
    }
    return false;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int m, n;
    cin >> m >> n;
    vector<vector<char>> mat(m, vector<char>(n, '.'));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    vector<char> path;
    bool found = false;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j]=='A') dfs(i, j, m, n, mat, visited, path, found);
        }
    }
    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;

    if(found) {
        string str = "";
        for(auto x : path) str += x;
        cout << str.size() << endl;
        cout << str << endl;
    } 
     
    return 0;
}