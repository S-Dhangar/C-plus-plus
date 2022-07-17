#include<iostream>
using namespace std;

int main(){
    int n,m,i,sum;
    cout<<"enter the interval in which you want to print all perfect numbers ";
    cin>>n>>m;
    for(i=n;i<m;i++){
        sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            cout<<i<<" is perfect number"<<endl;
            }
    }
    
    return 0;
}