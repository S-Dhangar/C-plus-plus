#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
  int max_index=n-1;
  int min_index=0;
  int i=0;
  int max=arr[n-1]+1;
        while(i<n){
            if(i%2==0){
                arr[i]=arr[i]+(arr[max_index]%max)*max;
                max_index--;
            }
            else{
                 arr[i]=arr[i]+(arr[min_index]%max)*max;
                min_index++;
            }
            i++;
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/max;
        }
 
    }
int main()
{
    
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    rearrange(arr,n);
    for(int i=0;i<n;i++)
    {
    cout<<arr[i];
    }
    return 0;
}