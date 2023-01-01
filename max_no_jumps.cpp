#include<iostream>
using namespace std;
int maxjump(int arr[],int n){
    int i=0,count=0;
    while(i<n){

        if(arr[i]>=n-1){

            return count;
        }
        if(arr[i]==0){
            return 0;
        }
        int max=0;
        for(int j=0;j<=arr[i];j++){
            if(arr[i+j]>max){
                max=arr[i+j];
            }
        }
        count++;
        i=i+max;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxjump(arr,n);
}