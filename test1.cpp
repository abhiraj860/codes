#include<bits/stdc++.h>
#define int long long int
using namespace std;

void placeChar(string & output, char x, int n) {
    for(int i = 0; i < n; i++) output += x; 
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;
    int n = str.size();
    string output = "";
    
    unordered_map<char, int> mp;
    for(auto x : str) mp[x]++;
    int oddCount = 0;
    char oddChar;
    for(auto x : mp) {
        if(x.second & 1) oddCount++, oddChar = x.first;
    } 
    if(oddCount <= 1) {
        for(auto x:mp) placeChar(output, x.first, x.second / 2);
            string temp = output;
            reverse(output.begin(), output.end());
            if(oddCount == 1) output += oddChar;
            output += temp;
            cout << output << endl; 
        
    } else {
        cout << "NO SOLUTION" << endl;
    }
    return 0;
}