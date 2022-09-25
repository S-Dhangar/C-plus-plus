#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>& graph,int vis[],int dfsvis[],int src,vector<int> &vec){
        vis[src]=1;
        dfsvis[src]=1;
        for(auto i:graph[src]){
            if(vis[i]==0){
               if(dfs(graph,vis,dfsvis,i,vec)){
                vec[src]=1;
                   return 1;
               }
            }
            else if(dfsvis[i]==1){
                 vec[src]=1;
                return 1;
            }
        }
        
        dfsvis[src]=0;
        return 0;
        
    }
    
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n=graph.size();
        vector<int> vec(n,0);
        int vis[1000000]={0};
        int dfsvis[1000000]={0};
      for(int i=0;i<n;i++){
        if(vis[i]==0){
            dfs(graph,vis,dfsvis,i,vec);
            
        }
      }
        vector<int> vec1;
       for(int i=0;i<n;i++){
            if(vec[i]==0){
                vec1.push_back(i);
            }
       }
        return vec1;
    }



int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec;
    int m;
    
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        cin>>m;
       for (int i = 0; i <m; i++)
       {
           int a;
           cin>>a;
           v.push_back(a);
       }
       vec.push_back(v);
       
    }
    
   vector<int> v1=eventualSafeNodes(vec);
   for (int i = 0; i < v1.size(); i++)
   {
       /* code */
       cout<<v1[i]<<" ";
   }
   
    return 0;
}