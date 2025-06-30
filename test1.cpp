#include<bits/stdc++.h>
#define int long long int
using namespace std;

void merge(vector<int> & arr, int s, int e) {
    int i = s;
    int mid = (s + e) >> 1;
    int j = mid + 1;
    vector<int> temp;
    while(i <= mid && j <= e) {
        if(arr[i] <= arr[j]) temp.push_back(arr[i]), i++;
        else temp.push_back(arr[j]), j++;
    }
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= e) {
        temp.push_back(arr[j]);
        j++;
    }
    int k = s;
    for(auto x : temp) {
        arr[k] = x;
        k++;
    }
    return;
}

void mergeSort(vector<int> & arr, int s, int e) {
    if(s == e) return;
    int mid = ((s + e) >> 1);
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for(auto x : arr) cout << x << endl;
    return 0;
}