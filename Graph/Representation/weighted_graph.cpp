#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<vector<pair<int,int>>> V;

/*
    i = u
    v[i][j].first = v
    v[i][j].second = w

*/
int main()
{
    int n,m;
    cin>>n>>m;
    V.resize(n);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        V[u].push_back({v,w});
    }

    cout <<"In Vector: "<<endl;
    for(int i=0;i<V.size();i++){
        cout << i << " -> ";

        for(int j=0;j<V[i].size();j++){
            cout << " ("<< V[i][j].first << ","<< V[i][j].second << ")" ;
        }

        cout << endl;
    }

    cout << "Printing in beutiful way: "<<endl;

    cout << "u v w"<<endl;
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            cout << i<<" "<<V[i][j].first << " "<< V[i][j].second <<endl;
        }
    } 
}