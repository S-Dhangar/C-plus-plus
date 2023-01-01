#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int r=4,c=4;
int spirallyTraverse(int matrix[][4]) 
    {
       
        int j=0,i=0;
        
        
       while(i <= r-1 && j <= c-1){
          
           for(int a=j;a<=(c-1);a++){
               cout<<matrix[i][a]<<" ";
           }
           i++;
           for(int a=i;a<=(r-1);a++){
             cout<<matrix[a][c-1]<<" ";
           }
          c--;
          if(i<=r-1){
           for(int a=(c-1);a>=j;a--){
               cout<<matrix[r-1][a]<<" ";
           }
            
          }
         r--;
        if(j<=c-1){
           for(int a=(r-1);a>=i;a--){
              cout<<matrix[a][j]<<" ";
           }
            
        }
           j++;
       }
       return 0;
    }
int main()
{
    
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
spirallyTraverse(matrix);
    return 0;
}