#include<bits/stdc++.h>
#define int long long int
using namespace std;

void fourSum(vector<pair<int, int>> & arr, int sums) {
    int n = arr.size();
    // cout << "currSum" << endl;
    for(int i = 0; i <= n - 4; i++) {
        for(int j = i + 1; j <= n - 3; j++) {
            int k = j + 1;
            int l = n - 1;
            while(k < l) {
                int currSum = arr[i].first + arr[j].first + arr[k].first + arr[l].first;
                if(currSum == sums) {
                    cout << arr[i].second << " " << arr[j].second << " " << arr[k].second << " " << arr[l].second;
                    return;
                } else if(currSum < sums) k++;
                else l--;
                
            } 
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    int sums;
    cin >> n >> sums;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        arr.push_back({inp, i + 1});
    }
    sort(arr.begin(), arr.end());
    fourSum(arr, sums);    

    return 0;
}