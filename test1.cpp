#include<bits/stdc++.h>
#define int long long int
using namespace std;

int binarySearch(vector<int> & arr, int key) {
    int s = 0;
    int e = arr.size() - 1;
    while(s <= e) {
        int mid = ((s + e) >> 1);
        if(arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }    
    return -1;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr = {2, 9, 10, 15, 18, 19, 20, 24};
    int key = 20;
    cout << binarySearch(arr, key) << endl;
    return 0;
}