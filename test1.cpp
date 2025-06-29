#include<bits/stdc++.h>
#define int long long int
using namespace std;

int printThreeSum(vector<pair<int, int>> & arr, int s, int n) {
    sort(arr.begin(), arr.end());
    int cont = true;
    for(int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        while(left < right) {
            int currSum = arr[i].first;
            currSum += arr[left].first;
            currSum += arr[right].first;
            if(currSum == s) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << endl;
                cont = false;
                break;
            } else if (currSum < s) {
                left++;
            } else {
                right--;
            }
        }
        if(cont == false) break;
    }
    if(cont == true) return -1;
    return 0;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, s;
    cin >> n;
    cin >> s;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        arr.push_back({p, i + 1});
    }
    int ans = printThreeSum(arr, s, n);
    if(ans == -1) cout << "IMPOSSIBLE" << endl; 
    return 0;
}