#include<iostream>
using namespace std;
void display(int a[],int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void mergearr(int a[],int low,int mid,int high){


int b[high];
int j=mid+1,i=low,k=low;

while(i<=mid && j<=high){
     
    if(a[i]<=a[j]){
        b[k]=a[i];
        i++;
        k++;
    }
    else{
        
        b[k] = a[j];
        j++;
        k++;
    }
}
while(i<=mid){
    b[k]=a[i];
    i++;
    k++;
}
while(j<=high){
    b[k]=a[j];
    k++;
    j++;
}
for(int i=low;i<=high;i++){
    a[i]=b[i];
}


}
void merge(int a[],int low,int high)
{
   if(low<high){
   int  mid=(low+high)/2;
     merge(a,low,mid);
     merge(a,mid+1,high);
     mergearr(a,low,mid,high);
   }
}
int main(){
    int n;
    cout<<"enter the number of elements ";

    cin>>n;
    int a[n];
   cout<<"enter the elements of the array ";
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    merge(a,1,n);
    display(a,n);
    return 0;
}