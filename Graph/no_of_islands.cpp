#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<int>>& grid,int i,int j,int n,int m){
        if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1){
            return 1;
        }
        return 0;
        
    }


    void find1(vector<vector<int>>& grid,int i,int j,int n,int m){
        grid[i][j]=0;
        if(check(grid,i,j+1,n,m)){
             find1(grid,i,j+1,n,m);
        }
        if(check(grid,i+1,j,n,m)){
             find1(grid,i+1,j,n,m);
        }
        if(check(grid,i-1,j,n,m)){
             find1(grid,i-1,j,n,m);
        }
        if(check(grid,i,j-1,n,m)){
             find1(grid,i,j-1,n,m);
        }
    }

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec;
    
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int k=0;k<m;k++)
        {
            int a;
            cin>>a;
           v.push_back(a);
           
        }
     vec.push_back(v);
        
    }
    cout<<endl;




    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    cout<<"Total number of islands in the sea are ";
    

    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(vec[i][j]==1){
                count++;
                find1(vec,i,j,n,m);
                
            }
        }
        
    }
    
  cout<<count;


    return 0;
}