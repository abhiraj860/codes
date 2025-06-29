#include<bits/stdc++.h>
#define int long long int
using namespace std;

void permute(string & str, int i) {
    if(i == str.size()) {
        cout << str << endl;
        return;
    } 
    for(int j = i; j < str.size(); j++) {
        swap(str[i], str[j]);
        permute(str, i + 1);
        swap(str[i], str[j]);
    }
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string str = "abcd";
    permute(str, 0);

    return 0;
}