#include<iostream>
using namespace std;
int check(int arr[],int i,int n){
    if(i==n){
        return 1;
    }

        if(arr[i]<arr[i-1]){
            return 0;
        }
        
            check(arr,++i,n);
        
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr,1,n)==0){
        cout<<"not sorted";
    }
    else{
        cout<<"sorted";
    }
    return 0;
}