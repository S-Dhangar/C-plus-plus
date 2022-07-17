#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d1=0,d2=0,dif=0;
    cin>>n;
    int a[n][n];
    for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
    }
    for(int i=1,j=1;i<=n;i++,j++){
       
            d1=d1+a[i][j];
        
    }
     for(int i=n,j=n;i>0;i--,j--){
       
            d2=d2+a[i][j];
        
    }
    dif=d2-d1;
    if(dif<0){
        dif=-1*dif;
    }
    cout<<dif;
}