#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n = 15;
    for (int i = 1; i <= 15; i++) {
        if(i % 15 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << to_string(i) << endl;
        }
    }
    return 0;
}