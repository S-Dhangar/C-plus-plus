#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	    
	    long long maxi,mini,omax=INT_MIN;
	    maxi=1;
	    mini=1;
	    for(int i=0;i<n;i++){
	       
	        if(arr[i]<0){
	            long long temp=maxi;
	            maxi=mini;
	            mini=temp;
	        }
	      
	        maxi=max((long long)arr[i],maxi*(long long)arr[i]);
	        mini=min((long long)arr[i],mini*(long long)arr[i]);
	        omax=max(maxi,omax);
	    }
	    return omax;
	}
int main()
{
    
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<maxProduct(arr,n);
    return 0;
}