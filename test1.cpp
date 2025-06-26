#include<bits/stdc++.h>
#define int long long int
using namespace std;

void placeChar(string & output, char x, int n) {
    for(int i = 0; i < n; i++) output += x; 
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, targetSum;
    cin >> n >> targetSum;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        arr.push_back({p, i + 1});
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    bool found = false;
    while(i < j) {
        int first = arr[i].first;
        int second = arr[j].first;
        if(first + second == targetSum) {
            cout << arr[i].second << " " << arr[j].second << endl;
            found = true;
            break;
        } else if (first + second < targetSum) {
            i++;
        } else {
            j--;
        }
    }
    if(!found) cout << "IMPOSSIBLE" << endl; 
    return 0;
}