#include<iostream>
using namespace std;
int top=-1;
 int back=-1;   
void enqueve(int a[],int n){
      if(top>=n-1){
         cout<<"queve is overflow";
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
    for(int i=top;i>back;i--){
        cout<<a[i]<<" ";
    }
    
}
void dequeve(int a[]){
    if(back>=top){
         cout<<"queve is underflow";
      }
      else{
          back=back+1;
          cout<<"popped element is "<<a[back];
           
      }
}
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];

    int num;
    int t;
    cout<<"enter number of test cases"<<endl;
    cin>>t;
    while(t--){
    cout<<"enter 1 to perform push operation";
    cin>>num;
     for(int i=0;i<2;i++){
    if(num==1){
        enqueve(a,n);
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
        
        dequeve(a);
    
    }
    }
    return 0;
}