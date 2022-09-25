#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

void push(vector<int> arr[], int a, int b)
{
    arr[a].push_back(b);
    arr[b].push_back(a);
}
vector<pair<pair<int, int>, int>> prims(vector<int> arr[],vector<vector<int>> &cost,int n){

    vector<int> mincost(n+1,INT_MAX),vis(n+1,0),path(n+1,-1);
   
   
    mincost[1]=0;
    int min,u;
    int tcost=0;
    for(int i=0;i<n;i++){

        int min=INT_MAX;
        for (int j = 1; j <= n; j++)
        {
            if(mincost[j]<min && vis[j]!=1){
                min=mincost[j];
                
                u=j;
               
            }
        }
        vis[u]=1;
        for(auto k: arr[u]){
            if(mincost[k]>cost[u][k] && vis[k]!=1){
            mincost[k]=cost[u][k];

            path[k]=u;
            }
        }
    }
vector<pair<pair<int, int>, int>> p;
//vector<pair<pair<int, int>, int>> g(m);
for(int i=1;i<=n;i++){
   pair<pair<int, int>, int> pt;
   pair<int,int> ps(path[i],i);
   int j=cost[path[i]][i];
   pt.first=ps;
   pt.second=j;
   p.push_back(pt);
    
        
    }
   /* for (int i = 0; i < p.size(); i++)
    {
      
        cout<<p[i].first.first<<" "<<p[i].first.second<<" "<<p[i].second;
        cout<<endl;
        
    } 
    */
    return p;
}



vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    int a,b,c;
       vector<int> arr[n+1];
     vector<vector<int>> cost(n+1,vector<int> (n+1,0));
    for(int i=0;i<m;i++){
         
        a=g[i].first.first;
      
        b=g[i].first.second;
        c=g[i].second;
        push(arr, a, b);
        cost[a][b] = c;
        cost[b][a]=c;
    }
   
   return prims(arr,cost,n);
    // Write your code here.
}

int main(){
    int n,m;
    cin>>n>>m;
    int a,b,c;
    vector<pair<pair<int, int>, int>> g(m);
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b>>c;
        g[i].first.first=a;
        g[i].first.second=b;
        g[i].second=c;
        
    }
    
   cout<<endl;
    g=calculatePrimsMST(n,m,g);
    for (int i = 1; i <= g.size(); i++)
    {
       
        cout<<g[i].first.first<<" "<<g[i].first.second<<" "<<g[i].second;
        cout<<endl;
        
    }
/*
0 1 5
0 2 10
1 3 20
1 2 3
2 3 2
*/
    return 0;
}