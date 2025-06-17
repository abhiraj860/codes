#include<bits/stdc++.h>
#define int long long int
using namespace std;

class Graph {
    int V;
    list<int> * adj;
public:
    Graph (int v) {
        V = v;
        adj = new list<int>[V];
    }

    void addEdge(int from, int to, bool undir = true) {
        adj[from].push_back(to);
        if(undir == true) adj[to].push_back(from);
        return;
    }
    void printAdjList() {
        for(int i = 0; i < V; i++) {
            cout << i << "-->";
            for(auto edge: adj[i]) {
                cout << edge << ",";
            }
            cout << endl;
        }
    }

};

int32_t main() {
    Graph g(6);
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