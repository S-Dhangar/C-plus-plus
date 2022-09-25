#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int check(vector<vector<int>>& image, int sr, int sc,int color, int newcolor,int m,int n){
        
        if(sr>=0 && sr<m && sc>=0 && sc<n && image[sr][sc]==color && color!=newcolor){
               return 1;
        }
        return 0;
    }
    
    
    void dfs(vector<vector<int>>& image, int sr, int sc,int color, int newcolor,int m,int n){
        image[sr][sc]=newcolor;
        
        if(check(image,sr,sc-1,color,newcolor,m,n)){
            dfs(image,sr,sc-1,color,newcolor,m,n);
        }
         
        if(check(image,sr-1,sc,color,newcolor,m,n)){
            dfs(image,sr-1,sc,color,newcolor,m,n);
        }
         
        if(check(image,sr+1,sc,color,newcolor,m,n)){
            dfs(image,sr+1,sc,color,newcolor,m,n);
        }
         
        if(check(image,sr,sc+1,color,newcolor,m,n)){
            dfs(image,sr,sc+1,color,newcolor,m,n);
        }
        
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       
        int col=image[sr][sc];
        int m=image.size();
        int n=image[0].size();
        
        dfs(image,sr,sc,col,color,m,n);
        return image;
    }



int main()
{
    vector<vector<int>> image;
    int m,n;
    cin>>m>>n;
    for (int i = 0; i <m; i++)
    {
        vector<int> vec;
        for (int j = 0; j <n; j++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        image.push_back(vec);
        
    }
    int r,c;
    cout<<"enter the current position ";
    cin>>r>>c;
    cout<<"enter the number of color you want to see ";
    int newcol;
    cin>>newcol;
    floodFill(image,r,c,newcol);
    for (int i = 0; i <m; i++)
    {
        for (auto j:image[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
