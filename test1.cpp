#include<bits/stdc++.h>
#define int long long int
using namespace std;

int pivot(vector<int> & arr, int s, int e) {
    int i = s - 1;
    int pivot = arr[e];

    for(int j = s; j <= (e - 1); j++) {
        if(pivot > arr[j]) i++, swap(arr[i], arr[j]);
    }
    swap(arr[i + 1], arr[e]);
    return i+1;
}

void quickSort(vector<int> & arr, int s, int e) {
    if(s >= e) return;
    int p = pivot(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4, -1, -2, 4, -5, 12, 109};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    for(auto x : arr) cout << x << " ";
    return 0;
}