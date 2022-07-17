#include<iostream>
using namespace std;
 int search(int A[],int l,int h,int key){
int mid=(l+h)/2;
    if(mid<=h){
        
        
        if(A[mid]==key){
            return mid;
        }
        else if(key<A[mid]){
           return search(A,l,mid-1,key);
        }
        else if(key>A[mid]){
           return search(A,mid+1,h,key);
        }
    }
    else{
        return -1;
    }
    
    
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