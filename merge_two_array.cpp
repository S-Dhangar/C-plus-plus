#include<iostream>
using namespace std;
void merge(int *arr,int arr1[],int arr2[],int high){
       int l=0;
       int a=0,b=0;
       while(a<=high && b<=high){
        if(arr1[a]<arr2[b] )
            {
                arr[l]=arr1[a];
                a++;
                
                
            }
            else{
        arr[l]=arr2[b];
            b++;
            

            
            }
            l++;
            
        }
         
             while(a<=high){
            arr[l]=arr1[a];
            a++;
            l++;
        }
        while(b<=high){
            arr[l]=arr2[b];
            l++;
            b++;
        }

     
        
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr[2*n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
     for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
merge(arr,arr1,arr2,n-1);
    
for (int i = 0; i < 2*n; i++)
{
    cout<<arr[i]<<" ";
}




}