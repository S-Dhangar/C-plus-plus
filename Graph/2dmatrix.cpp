#include<iostream>
using namespace std;
#define n 5
void intls(int &arr,int s){
   int a,b;
   for(int i=0;i<7;i++){
   cin>>a>>b;
   arr[a][b]=1;
   }
}
int main()
{
   

    int arr[n][n]={0};
    intls(arr,n);


    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <=n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}