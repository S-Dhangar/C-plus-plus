#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	int count(int arr[],int n,int sum,vector<int> &dp){
	    
	    if(sum==0){
	        return 0;
	    }
	    if(dp[sum]!=-1){
	        return dp[sum];
	    }
	    int mini=INT_MAX;
	    for(int i=0;i<n;i++){
	        
	       if(sum-arr[i] >= 0){
	            
	            int ans=count(arr,n,sum-arr[i],dp);
	            
	            if(ans!=INT_MAX)
	            mini=min(ans+1,mini);
	            
	            
	            
	        }
	       
	    }
	    return dp[sum]=mini;
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	     int i = 0;

     if (M == 1)

     {

         int r = coins[0] == V?1:-1;

         return r;

     }
	    vector<int> dp(V+1,-1);	
	   int res=count(coins,M,V,dp);
	   if (res != INT_MAX)

     {

         return res;

     }

     return -1;
	    
	} 
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int money;
    // enter total sum you have
    cin>>money;
    cout<<minCoins(arr,n,money);
    
    
    return 0;
}