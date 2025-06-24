#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<string> temp = {"0", "1"};
    while(n > 1) {
        vector<string> temp1 = temp;
        for(int i = 0; i < temp.size(); i++) temp[i] = "0" + temp[i];
        reverse(temp1.begin(), temp1.end());
        for(int i = 0; i < temp1.size(); i++) temp1[i] = "1" + temp1[i], temp.push_back(temp1[i]);
        n--;
    }
    for(auto x : temp) cout << x << endl;
    return 0;
}