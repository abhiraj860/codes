#include<bits/stdc++.h>
#define int long long int
using namespace std;

void findChar(int num) {
    int constNum = 9;
    int cnt = 1;
    int tens = 1;
    while((num - constNum) > 0) {
        num -= constNum;
        cnt++;
        tens *= 10;
        constNum = (tens * cnt * 9);
    }
    int startNum = tens;

    int sizeChar = to_string(startNum).size();

    int indexNum = (num - 1) / sizeChar;
    int numExact = startNum + indexNum;
    int index = (num - 1) % sizeChar;
    cout << to_string(numExact)[index] << endl;
    return; 
}



int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int q; cin >> q;
    while(q--) {
        int num; cin >> num;
        findChar(num);
    }

    return 0;
}