#include<iostream>
using namespace std;
void segeregate(int *arr,int n){

 for(int i=0,j=1;j<n;){
         if(arr[i]==0 && arr[j]==1){
             i++;
             j++;
         }
        else if(arr[i]==1 && arr[j]==1){
             
             j++;
         }
        else if(arr[i]==1 && arr[j]==0){
             arr[i]=0;
             arr[j]=1;
             i++;
             j++;
         }
         else{
             i++;
             j++;
         }
     }
        





}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   segeregate(arr,n);
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   
    return 0;
}