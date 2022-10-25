#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
unordered_map<int,list<int>> adj;

void addEdge(int u,int v, bool direction) {
    //direction = 0 -> undirected
    //direction = 1 -> directed
    //create an edge from u to v
    adj[u].push_back(v);
    if(direction == 0) {
        adj[v].push_back(u);
    }
}

    void printAdjList() {
        for(auto i:adj) {
            cout << i.first << " ->";
            for(auto j:i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    };

int main() {

    int n;
    cout << "Enter the number of Nodes "<< endl;
    cin >> n;

    int m;
    cout << "Enter the number of Edges "<< endl;
    cin >> m;

    cout << "Enter u v direction(1/0)";
    for(int i=0; i<m; i++) {
        int u,v,d;
        cin >> u >> v >> d;
        addEdge(u,v,d);
    }

    printAdjList();

    return 0;
}