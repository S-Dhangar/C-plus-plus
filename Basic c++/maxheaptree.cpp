#include<iostream>
using namespace std;

void heapify(int a[],int n,int i){
    int largest=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<n && a[l]>a[largest])
            largest=l;
        
        
        if(r<n && a[r]>a[largest]){
            largest=r;
        }
       
        if(largest!=i){
         int temp=a[i];
         a[i]=a[largest];
         a[largest]=temp;
          heapify(a,n,largest);
        }

}


void heap(int a[],int n){
     for(int i=n/2-1;i>=0;i--){
         heapify(a,n,i);
     }
}

void printheap(int a[],int n){
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements from which you want to a heap tree";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heap(a,n);
    cout<<"after heapify = ";
    printheap(a,n);
    return 0;
}