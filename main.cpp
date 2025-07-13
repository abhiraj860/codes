#include<bits/stdc++.h>
#define int long long int
using namespace std;

// void printNQueen(vector<vector<char>> & arr) {
//     for(int i = 0; i < 8; i++) {
//         for(int j = 0; j < 8; j++) {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
//     return;
// }

bool validPos(int row, int col, vector<vector<char>> & arr) {
    int i = row;
    int j = col;
    for(int k = 0; k < i; k++) {
        if(arr[k][col] == 'Q') return false;
    }
    while(i >= 0 && j>= 0) {
        if(arr[i][j] == 'Q') return false;
        i--;
        j--;
    }
    i = row;
    j = col;
    while(i >= 0 && j < 8) {
        if(arr[i][j] == 'Q') return false;
        i--;
        j++;
    }
    return true;
}

void nQueenProb(int row, int col, vector<vector<char>> & arr, int tot, int & cnt) {
    if(row >= tot) {
        cnt++;
        return;
    } 
   
    for(int col = 0; col < tot; col++) {
        if(arr[row][col] == '.') {
            if(validPos(row, col, arr)) {
                arr[row][col] = 'Q';
                nQueenProb(row + 1, 0, arr, tot, cnt);
                arr[row][col] = '.'; 
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
    vector<vector<char>> arr(8, vector<char>(8));
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    nQueenProb(0, 0, arr, 8, cnt);
    cout << cnt << endl;
    return 0;
}