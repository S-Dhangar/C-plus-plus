#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int a=0,b=0,sum=10000,max_sum=0;
    int n1=n;
    for(int i=0;i<n1-1;i++){
        for(int j=0;j<n-1;j++){
            if((arr[j]+arr[j+1])<sum){
                a=j;
                b=j+1;
               
                  sum=arr[j]+arr[j+1];

                
            }
        }
       // cout<<sum<<" ";
        max_sum=sum+max_sum;
        arr[a]=sum;
         for(int k=b;k<n-1;k++){
                    arr[k]=arr[k+1];

                }
        n--;
        sum=10000;
    }
    // for (int i = 0; i < n; i++)
  //  {
   //     cout<<arr[i]<<" ";
   // }
    
    cout<<max_sum;
    return 0;
}