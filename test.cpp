#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool compare(string s1, string s2) {
    return s1 + s2 > s2 + s1;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> number = {10, 11, 20, 30, 3};
    vector<string> output;
    for(auto x : number) output.push_back(to_string(x));
    sort(output.begin(), output.end(), compare);
    string str = "";
    for(auto x : output) str += x; 
    cout << str << endl;
    return 0;
}