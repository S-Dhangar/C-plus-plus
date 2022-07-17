#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int *ptr=&a;
    cout<<ptr<<" "<<*ptr<<endl;
    int *arr=new int[3];
    arr[0]=1;
   *(arr+1)=2;
   arr[2]=3;
   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;

   delete[] arr;
cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
    return 0;
}