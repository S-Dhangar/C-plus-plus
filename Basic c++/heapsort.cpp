#include<iostream>
using namespace std;
void heapify(int a[],int n,int i){
    int largest=i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if(a[largest]<a[left] && left<n){
        largest= left;
    }
    if(right<n && a[largest]<a[right]){
        largest= right;
    }
    if(largest!= i){
       int temp= a[largest];
       a[largest]=a[i];
       a[i]=temp;
       heapify(a,n,largest);
    }
}
void heapsort(int a[],int n){
    int index= n/2 -1;
    for (int i = index; i >= 0; i--)
    {
        /* code */
        heapify(a,n,i);
    }
    for (int i = n-1; i >= 0; i--)
    {
        /* code */
         int temp= a[0];
       a[0]=a[i];
       a[i]=temp;
       heapify(a,i,0);
    }
    
}
void printheap(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";

    }
}

int main(){
    cout<<"enter the size of the array you want to sort\n";
    cout<<"size = ";
    int n;
    cin>>n;
    int a[n];
    int i;
    cout<<"enter the array you want to sort = ";
    for ( i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    cout<<"array before sorting is = ";
      for ( i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    heapsort(a,n);
    cout<<"array after sorting is ";
    printheap(a,n);
    
    return 0;
}