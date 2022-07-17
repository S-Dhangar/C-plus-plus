#include<iostream>
using namespace std;

int main(){
    int n,m,j=0,i=0;
    cout<<"enter the interval of which you want to print a;ll the whole numbers";
    cin>>n>>m;
    for(i=n;i<=m;i++){
        for(j=2;j<i;j++){
           if(i%j==0){
              break;
           }
        }
        if(j==i){
            cout<<i<<" is prime number"<<endl;
        }
    }
    
    return 0;
}