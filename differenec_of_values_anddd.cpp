#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++){
            
            // lets think on these---> | arr[i]-arr[j]| + | i-j |  just try to solve it
            
            max1=max(max1,arr[i]-i);
            min1=min(min1,arr[i]-i);
            max2=max(max2,arr[i]+i);
            min2=min(min2,arr[i]+i);
        }
        return max(max1-min1,max2-min2);
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
    
    cout<<maxDistance(arr,n);
    
    return 0;
}