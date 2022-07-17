#include<iostream>
using namespace std;
int search(int arr[],int low,int high,int key){
 int mid=(low+high)/2;
 if(mid<=high){
 if(arr[mid]==key){
     return mid;
 }
 else if(arr[mid]<key){
     return search(arr,mid+1,high,key);
 }
 else if(arr[mid]>key){
     return search(arr,low,mid-1,key);
 }
 }
 else{
     return -1;
 }

}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
   int result= search(arr,0,n-1,k);
   if(result==-1){
       cout<<"element not found";
   }
   else{
       cout<<result;
   }
    return 0;
}