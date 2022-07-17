#include<iostream>
using namespace std;


int search(int arr[],int l,int h,int key){
   int mid=(l+h)/2;
   while(mid<h){
       
       if(arr[mid]==key){
           return mid;
       }
       else if(arr[mid]<key){
           mid=(l+mid-1)/2;
       }
       else if(arr[mid]>key){
           mid=(mid+1+h)/2;
       }
       
   }

   
           return -1;
       
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
int key;
cin>>key;
   int ind= search(arr,0,n,key);
    cout<<ind;
    return 0;
}