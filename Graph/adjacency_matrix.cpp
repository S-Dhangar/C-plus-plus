#include<iostream>
using namespace std;

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    
    int a,b;
    int adj[nodes+1][nodes+1]={0};
    for(int i=1;i<=edges;i++){
        cin>>a>>b;
        adj[a][b]=1;
         adj[b][a]=1;
    }


    for(int i=1;i<=nodes;i++){
        cout<<i<<"-> ";
        for(int j=1;j<=nodes;j++){
            if(adj[i][j]==1)
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}