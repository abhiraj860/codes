#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Graph {
    int v;
    list<pair<int, int>> * l;
    
public:
    Graph(int v) {
        this->v = v;
        l = new list<pair<int, int>>[v];
    }
    void addEdge(int i, int j, int wt, bool undir = true) {
        l[i].push_back({j, wt});
        if(undir) l[j].push_back({i, wt});
        return;
    }
    void printEdge() {
        for(int i = 0; i <= v - 1; i++) {
            cout << i << "->";
            for(auto x : l[i]) cout << "(" << x.first << "," << x.second << "),";
            cout << endl;
        }
        return;
    }
};


int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    Graph g(5);   
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(0, 2, 4);
    g.addEdge(0, 3, 7);
    g.addEdge(3, 2, 2);
    g.addEdge(3, 4, 3);
    g.printEdge();
    return 0;
}