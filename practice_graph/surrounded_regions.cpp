#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(int n,int m,int i,int j,vector<vector<char>> &arr){
    if(i>=0 && j>=0 && i<n && j<m && arr[i][j]=='O'){
        return 1;
    }
    return 0;
}
void dfs(int n,int m,int i,int j,vector<vector<char>> &arr){
   
        arr[i][j]='B';
    

    if(check(n,m,i-1,j,arr)){
       dfs(n,m,i-1,j,arr);   
    }

    if(check(n,m,i,j-1,arr)){
       dfs(n,m,i,j-1,arr);   
    }
    
    if(check(n,m,i+1,j,arr)){
       dfs(n,m,i+1,j,arr);   
    }
    if(check(n,m,i,j+1,arr)){
       dfs(n,m,i,j+1,arr);   
    }
}

void sur_reg(int n,int m,vector<vector<char>> &arr){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((i==0 || j==0) || (i==n-1 || j==m-1) ){
                if(arr[i][j]=='O')
                dfs(n,m,i,j,arr);
            }
        }
       
        
    }
    


}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m,0));
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
  

sur_reg(n,m,arr);





  for (int i = 1; i <n-1; i++)
    {
        for (int j = 1; j < m-1; j++)
        {
            if(arr[i][j]=='O'){
                arr[i][j]='X';
            }
        }
       
        
    }

cout<<endl<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
/*
test case

4 4
X X X X
O O X X
O X O X 
X X X O

*/