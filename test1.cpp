#include<bits/stdc++.h>
#define int long long int
using namespace std;

int getMaxCnt(string & str) {
    int n = str.length();
    int ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        int cnt = 1;
        while(i < (n - 1) && str[i] == str[i + 1]) {
            cnt++;
            i++;
        }
        ans = max(ans, cnt);
    }
    return ans;
}


int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string str;
    cin >> str;
    cout << getMaxCnt(str) << endl;
    return 0;
}