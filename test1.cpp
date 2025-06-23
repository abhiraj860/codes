#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 18;
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        while(left < right) {
            int currentSum = arr[i];
            currentSum += arr[left];
            currentSum += arr[right];
            if(currentSum == target) {
                result.push_back({arr[i], arr[left], arr[right]});
                left++;
                right--;
            } else if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    for(auto x : result) {
        cout << x[0] << " , " << x[1] << " , " << x[2] << endl;
    }

    return 0;
}