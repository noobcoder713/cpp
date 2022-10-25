#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int main(){
    int n,m;
    cin >> n>>m;
    vector<vector<int>>V(n,vector<int>(n,INF));

    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        V[u][v] = w;
        V[i][i] = 0;
    }


    vector<vector<int>> dist = V;

    for(int k =0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][j] > dist[i][k]+dist[k][j]){
                    dist[i][j] = dist[i][k]+dist[k][j];
                }
            }
        }
    }

    cout << "\nOutput:\n";
    for(int i = 0; i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][j]==INF){
                cout << "null\t" ;
            }
            else{
                cout << dist[i][j] << "\t";
            }
        }
        cout << endl;
    }
}