#include<bits/stdc++.h>
#define int long long int
using namespace std;

class graph {
    int v;
    list<int> * l;
public:
    graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }
    void addEdge(int i, int j, bool undir = true) {
        l[i].push_back(j);
        if(undir) l[j].push_back(i);
        return;
    }
    void printAdjList() {
        for(int i = 0; i <= v - 1; i++) {
            cout << i << "->";
            for(auto node: l[i]) cout << node << ",";
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

    graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(2, 1);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(2, 3);
    g.addEdge(3, 5);   

    g.printAdjList();

    return 0;
}