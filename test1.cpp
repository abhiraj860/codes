#include<bits/stdc++.h>
#define int long long int
using namespace std;

int merge(vector<int> & arr, int s, int e) {
    int i = s;
    int m = (s + e) >> 1;
    int j = m + 1;
    int ans = 0;
    vector<int> temp;
    while(i <= m && j <= e) {
        if(arr[i] <= arr[j]) temp.push_back(arr[i]), i++;
        else temp.push_back(arr[j]), j++, ans += (m - i + 1); 
    }
    while(i <= m) temp.push_back(arr[i]), i++;
    while(j <= e) temp.push_back(arr[j]), j++;
    int k = s;
    for(auto x: temp) arr[k] = x, k++;
    return ans; 
}

int mergeSort(vector<int> & arr, int s, int e) {
    if(s == e) return 0;
    int mid = (s + e) >> 1;
    int ans = mergeSort(arr, s, mid);
    ans += mergeSort(arr, mid + 1, e);
    ans += merge(arr, s, e);
    return ans;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {0, 5, 2, 3, 1, 0, 0};
    int e = arr.size() - 1;
    cout << mergeSort(arr, 0, e) << endl;
    return 0;
}