#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int INF = 1e9;

int main()
{
    bool isNegative = false;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    } 

    int src;
    cin>>src;


    //v er upore je infinity thake
    vector<int>dist(n,INF);
    dist[src] = 0;

    //relaxataion for n-1 times.
    for(int i=0;i<n-1;i++){
        for(int j =0; j<edges.size(); j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            //v er upore infinity change hoye minimum value hocche
            dist[v] = min(dist[v],w+dist[u]);
        }
    }

    //for checking if there are any negative cycle
    //we need to do   one more relaxation
    //if the value of destination vector changes
    //that means there is a negative cycle
    //so, the value of destination will keep changing
    
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        if(dist[v] > w+dist[u]){
            isNegative = true;
            cout << "Negative Cycle";
            break;
        }
    }

    if(!isNegative){
        for(int i=0;i<dist.size();i++){
            cout << dist[i] << " ";
        } 
    }    
}