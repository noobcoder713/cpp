#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(n,INF));
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x][y]=1;
        v[i][i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}