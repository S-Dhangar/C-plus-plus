#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    
    long long n1=n;
long long sum=100,msum=0;
    for (long long i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+n);
    for(long long i=0;i<n1-1;i++){
        if(sum>(arr[0]+arr[1])){
            sum=arr[0]+arr[1];
        }
        arr[0]=sum;
        for(long long j=1;j<n-1;j++){
            arr[j]=arr[j+1];
        }
         n--;
        
       
       
        sort(arr,arr+n);
        msum=sum+msum;
     
        sum=100;
       
    }
     cout<<msum<<" ";
    return 0;
}