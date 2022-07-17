#include<iostream>
using namespace std;
int top=-1;
    
void push(int a[],int n){
      if(top>=n-1){
         cout<<"stack is overflow";
      }
      else{
          int no;
          cout<<"enter the e;lement you want to insert";
          cin>>no;
          top=top+1;
          a[top]=no;
      }
}
void display(int a[]){
    for(int i=top;i>=0;i--){
        cout<<a[i]<<" ";
    }
    
}
void pop(int a[]){
    if(top<=0){
         cout<<"stack is underflow";
      }
      else{
          top=top-1;
           
      }
}
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];

    int num;
     label:
    cout<<"enter 1 to perform push operation";
    cin>>num;
     for(int i=0;i<2;i++){
    if(num==1){
        push(a,n);
    } 
     }
    cout<<"enter  2 to display";
    cin>>num;
   
    if(num==2){
       
       display(a);
       
    }
     cout<<"enter 3 to pop operation ";
     cin>>num;
    if(num==3){
        
        pop(a);
    
    }
     goto label;
    return 0;
}