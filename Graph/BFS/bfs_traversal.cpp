#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>> V;
vector<bool> vis;
queue<int> q;
void addEdge(int u,int v){
    V[u].push_back(v);
    V[v].push_back(u);
}

void BFS(){
    vis[0] = true;
    q.push(0);

    while(!q.empty()){
        int s = q.front();
        cout << s << " ";
        q.pop();

        for(auto i:V[s]){
            if(vis[i]==false){
                vis[i] = true;
                q.push(i);
            }
        }
    }
}

int main(){
    int n,m;
    cin >> n>>m;
    V.resize(n);
    vis.resize(n,false);
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        addEdge(u,v);
    }

    BFS();
}