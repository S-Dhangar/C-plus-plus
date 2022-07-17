#include<iostream>
using namespace std;
void merge(int *arr,int low,int mid,int high){
        int a=low,b=mid+1,c=high,k=0;;
        int arr1[100];
        while(a<=mid && b<=high){
        if(arr[a]<arr[b] )
            {
                arr1[k]=arr[a];
                a++;
                k++;

            }
            else{
                    arr1[k]=arr[b];
            b++;
            k++;
            }
        

            
        }

        while(a<=mid){
            arr1[k]=arr[a];
            a++;
            k++;
        }
        while(b<=high){
            arr1[k]=arr[b];
            k++;
            b++;

        }
        k=0;
        for (int i = low; i <=high ; i++)
        {
            arr[i]=arr1[k];
            k++;
        }
        
}
void partition(int *arr,int low,int high){
    int mid=(low+high)/2;
    if(low<high){
        partition(arr,low,mid);
        partition(arr,mid+1,high);
        merge(arr,low,mid,high);
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
partition(arr,0,n-1);
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}




}