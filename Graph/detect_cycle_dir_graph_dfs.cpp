#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int> arr[],int u,int v){
    arr[u].push_back(v);
}

bool dfs(int i,vector<int> arr[],int vis[],int dfsvis[]){
    
        vis[i]=1;
        dfsvis[i]=1;
        for (auto j: arr[i])
        {
            if(vis[j]==0){
            if(dfs(j,arr,vis,dfsvis))
            return true;
            }
              
            else if(dfsvis[j]==1){
             return true;
            }
        }
        
  
    dfsvis[i]=0;
   
    return false;

}


int main()
{
    int n;
    cin>>n;
    vector<int> arr[n];
    push(arr,4,2);
    push(arr,1,2);
    //push(arr,2,0);
    push(arr,2,3);
  //  push(arr,3,4);
  //  push(arr,2,4);
  //  push(arr,4,3);
  //  push(arr,4,5);
  //  push(arr,3,1);
  //  push(arr,3,5);
   // push(arr,5,2);

    for (int i = 0; i <n; i++)
    {
        cout<<i<<" -> ";
        for (auto j:arr[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int vis[n]={0},dfsvis[n]={0};
int a=0;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
           
            if(dfs(i,arr,vis,dfsvis)){
               // a=1;
                
              cout<<i<<" ";
            }
        }
    }
    
if(a){
    cout<<"cycle is present";
}
else{
    cout<<"cycle is not present";
}


    return 0;
}