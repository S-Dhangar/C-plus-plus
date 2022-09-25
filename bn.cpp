#include<iostream>
using namespace std;
int bns(int arr[],int h,int l,int num){
    int mid;

    if(mid>=l){
    mid=(l+h)/2;
     if(arr[mid]==num){
        return mid;
    }
    else if(arr[mid]<num){
        bns(arr,h,mid+1,num);
    }
    else if(arr[mid]>num){
        bns(arr,mid,l,num);
    }
    
    }
    else
        return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
   int res= bns(arr,n-1,0,num);
   cout<<res;
    return 0;
}