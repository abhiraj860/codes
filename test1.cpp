#include<bits/stdc++.h>
#define int long long int
using namespace std;

void printSubSet(string str, int i) {
    string out = "";
    int j = 0;
    while(i > 0) {
        if(i & 1) out += str[j];
        i = i >> 1;
        j++; 
    }
    cout << out << endl;
    return;
}

void findingSubsets(string str) {
    int n = str.length();
    for(int i = 0; i <= ((1 << n) - 1); i++) {
        printSubSet(str, i);
    }
    return;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string str;
    cin >> str;
    findingSubsets(str);
    return 0;
}