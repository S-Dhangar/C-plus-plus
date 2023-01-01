#include<iostream>
using namespace std;
int Binarysearch(int a[],int low,int high,int key){

 if(high>=low){
         
      
      int mid=(low+high)/2;
      if(a[mid]==key){
         return mid;
      }
      if(a[mid]>key){
       return  Binarysearch(a,low,mid-1,key);
      }
      if(a[mid]<key){
    return  Binarysearch(a,mid+1,high,key);
      }
 }
  return -1;   
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int num,pos;
    cout<<"enter the number youwant to search";
    cin>>num;
    pos=Binarysearch(a,1,n,num);
    if(pos==-1){
        cout<<"element not found";
    }
    else{
    cout<<num<<"is at "<<pos<<" position";
    }
    return 0;
}