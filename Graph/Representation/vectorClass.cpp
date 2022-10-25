#include<iostream>
#include<vector>
using namespace std;
class graph {
public:
    vector<vector<int>> adj;

    void addEdge(int u,int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printAdjList(){
            for(int i=0;i<adj.size();i++){
                cout << i << " -> ";
                for(int j=0;j<adj[i].size();j++){
                    cout << adj[i][j] << " ";
                }
                cout << endl;
            }
        }
   
};

int main() {

    int n;
    cout << "Enter the number of Nodes "<< endl;
    cin >> n;

    int m;
    cout << "Enter the number of Edges "<< endl;
    cin >> m;

    graph g;
    g.adj.resize(n);

    for(int i=0; i<m; i++) {
        int u,v;
        cin >> u >> v;
        g.addEdge(u,v);
    }

    g.printAdjList();

    return 0;
}