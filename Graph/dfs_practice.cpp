#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void dfs(vector<int>adj[],int src,int arr[],int v){
    cout<<src<<" ";
    arr[src]=1;
    for (auto j: adj[src])
    {
        if(arr[j]==0)
        dfs(adj,j,arr,v);
    }
    
}



int main()
{
    int v;
    cin>>v;
    vector<int>adj[v];
     push(adj,0,1);
    push(adj,0,2);
    push(adj,1,3);
    push(adj,2,4);
    push(adj,3,5);
     push(adj,4,5);
   
    for(int i=0;i<v;i++){
       
        cout<<i<<" -> ";
        for(auto j:adj[i] ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int arr[v]={0};
    dfs(adj,0,arr,v);



    return 0;
}