#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool changeMatrix(vector<vector<char>> & matrix, int row, int col) {
    int dx[2] = { 0,-1};
    int dy[2] = {-1, 0};
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            set<char> st = {'A', 'B', 'C', 'D'};
            st.erase(matrix[i][j]);
            for(int m = 0; m < 2; m++) {
                int nx = i + dy[m];
                int ny = j + dx[m];
                if(nx >= 0 && ny >= 0 && ny < col && nx < row) {
                    if(st.find(matrix[nx][ny]) != st.end()) st.erase(matrix[nx][ny]); 
                }
                if(st.size() == 0) return false;
                else matrix[i][j] = *st.begin();
            }
        }
    }
    return true;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int row, col;
    cin >> row >> col;
    vector<vector<char>> matrix(row, vector<char>(col, ' '));
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            char a;
            cin >> a;
            matrix[i][j] = a; 
        }
    }

    bool res = changeMatrix(matrix, row, col);

    for(int i = 0; i < row && res == true; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j]; 
        }
        cout << endl;
    }
    if(!res) cout << "IMPOSSIBLE" << endl;
    return 0;
}