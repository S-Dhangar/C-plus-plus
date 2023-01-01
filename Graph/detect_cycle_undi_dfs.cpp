#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int> arr[],int a,int b){
    arr[b].push_back(a);
    arr[a].push_back(b);
}


 bool dfs(vector<int> arr[],int vis[],int par[],int src){
        vis[src]=1;
        for(int i=0;i<arr[src].size();i++){
            if(vis[i]==0){
            par[i]=src;
            dfs(arr,vis,par,i);
            }
            else if(src!=par[i]){
                return 1;
            }
            
        }
        return 0;
    }
    bool isCycle(int V, vector<int> arr[]) {
      int vis[V]={0};
      int par[V]={0};
      
      return dfs(arr,vis,par,0);
        
    }
int main()
{
    int n;
    cin>>n;
    vector<int> arr[n];
    push(arr,0,1);
    push(arr,1,2);
    push(arr,2,4);
    push(arr,4,3);
    push(arr,3,2);
    push(arr,2,5);
    push(arr,5,3);
    
    
  
    

    for (int i = 0; i <n; i++)
    {
        cout<<i<<" -> ";
        for (auto j:arr[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    int arr1[n]={0};
     int parent[n];
    cout<<endl;
    
    cout<<isCycle(n,arr);




    return 0;
}