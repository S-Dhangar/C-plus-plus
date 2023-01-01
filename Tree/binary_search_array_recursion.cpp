#include<iostream>
using namespace std;
int bs(int arr[],int low,int high,int num){
    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==num){
            return mid;
        }
        else if(arr[mid]<num){
            
            bs(arr,mid+1,high,num);
        }
        else if(arr[mid]>num){
            
            bs(arr,low,mid-1,num);
        }
    }
    else{
        return -1;
    }
}
int main()
{
    int n;
    cout<<"enter the number of element in the array ";
    cin>>n;
    int arr[n];
    cout<<"enter the lements of the array ";
    
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int num;
    cout<<"enter the number you want to search ";
    cin>>num;
    int pos=bs(arr,0,n-1,num);
    
    
    cout<<"element is present at "<<pos;
    return 0;
}