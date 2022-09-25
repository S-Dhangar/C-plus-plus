#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large=0;
    int secondlarge=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>large)
        {
            secondlarge=large;
            large=arr[i];
        }
        if(arr[i]>secondlarge && arr[i]<big){
            secondlarge=arr[i];
        }
        
    }
    if(large==secondlarge)
    cout<<-1;
    else
    cout<<secondlarge;
    return 0;
}