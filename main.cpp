#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;
    int n = str.size();
    map<char, int> mp;
    for(auto x: str) mp[x]++;
    int maxRepeat = 1;
    string output;
    for(auto x: mp) maxRepeat = max(maxRepeat, x.second);
    if(maxRepeat > ((n + 1 )/ 2)) cout << -1 << endl;
    else {
        priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> pq;
        for(auto x: mp) pq.push(x);
        while(!pq.empty()) {
            pair<char, int> f = pq.top();
            pq.pop();
            if(output.size() == 0) {
                output += f.first;
                f.second--;
                if(f.second > 0) pq.push(f);
            } else {
                int i = output.size() - 1;
                if(output[i] == f.first) {
                    if(pq.size() >= 1) {
                        pair<char, int> s = pq.top();
                        pq.pop();
                        output += s.first;
                        s.second--;
                        pq.push(f);
                        if(s.second > 0) pq.push(s);
                    } else {
                        while(f.second > 0 && i >= 0) {
                            if( output[i] != f.first) {
                                string partOne = output.substr(0,i + 1);
                                string partTwo = output.substr(i + 1);
                                // cout << partOne << endl;
                                // cout << partTwo << endl;
                                output = partOne + f.first + partTwo;
                                // cout << "Output" << output << endl;
                                f.second--;
                                i++;
                            }
                            i -= 2;

                        } 
                        if(f.second > 0) output = f.first + output, f.second--;
                    }
                } else if(output[i] != f.first) {
                    output += f.first;
                    f.second--;
                    if(f.second > 0) pq.push(f);
                }
            }
        } 
        cout << output << endl;
    } 
    return 0;
}