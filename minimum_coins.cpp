#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum(int money,int arr[],int n)
{
if(money==0){
    return 0;
}
int ans=INT_MAX,min=0;
for(int i=0;i<n;i++){
    
    if(money>0){
     min=minimum(money-arr[i],arr,n)+1;
    }
    if(ans>min){
        ans=min;
    }

}
return ans;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int rs;
    cin>>rs;
    int ans=minimum(rs,arr,n);
    cout<<ans;
    
}