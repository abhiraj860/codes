#include<bits/stdc++.h>
#define int long long int
using namespace std;

void sortPermute(string str, int i, set<string> & st) {
    if(i == str.size()) {
        st.insert(str);
        return;
    } 
    for(int j = i; j < str.size(); j++) {
        swap(str[i], str[j]);
        sortPermute(str, i + 1, st);
        swap(str[i], str[j]);
    }
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str = "acb";
    set<string> st;
    sortPermute(str, 0, st);
    for(auto x : st) cout << x << endl; 
    return 0;
}