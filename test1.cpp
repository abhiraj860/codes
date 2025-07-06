#include<bits/stdc++.h>
#define int long long int
using namespace std;

int pivot(vector<int> & arr, int s, int e) {
    int i = s - 1;
    int p = arr[e];
    for(int j = s; j <= e - 1; j++) {
        if(arr[j] < p) i++, swap(arr[j], arr[i]);
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

int quickSort (vector<int> & arr, int s, int e, int k) {
    int p = pivot(arr, s, e);
    if(p == k) return arr[p];
    else if (k < p) return quickSort(arr, s, p - 1, k);
    else return quickSort(arr, p + 1, e, k); 
    return -1;
}


int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    int n = arr.size();
    int k = 0;
    cout << quickSort(arr, 0, n - 1, k) << endl;
    return 0;
}