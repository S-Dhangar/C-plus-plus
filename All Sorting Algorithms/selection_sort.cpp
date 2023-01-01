#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
                
            }
        }
       
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}