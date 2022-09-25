#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<int>> &grid,int i,int j,int n,int m){
    if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1){
        return 1;
    }
    return 0;
}


int dfs(int n,int m,int i,int j,vector<vector<int>> &grid,int *c){
   
    (*c)++;
    grid[i][j]=0;
    
        if(check(grid,i,j+1,n,m)){
          
             dfs(n,m,i,j+1,grid,c);
        }
        if(check(grid,i+1,j,n,m)){
            
             dfs(n,m,i+1,j,grid,c);
        }
        if(check(grid,i-1,j,n,m)){
            
             dfs(n,m,i-1,j,grid,c);
        }
        if(check(grid,i,j-1,n,m)){
            
             dfs(n,m,i,j-1,grid,c);
        }
        
        return *c;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
int count=0,c=0;
int ans=0;
     for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==1){
             c=dfs(n,m,i,j,arr,&count);
             ans=max(ans,c);
             count=0;
            }
        }
        
    }
cout<<ans;
    return 0;
}
/* test case

3 3
2 1 1
1 1 0
0 1 1

*/