#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
int main()
{
    int v;
    cin>>v;
    vector<int>adj[v];
    push(adj,0,1);
    push(adj,0,2);
    push(adj,1,3);
    push(adj,1,2);
    push(adj,2,3);
    push(adj,2,4);
    push(adj,3,4);
   






    
    for(int i=0;i<v;i++){
        cout<<i<<" -> ";
        for(auto j:adj[i] ){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}