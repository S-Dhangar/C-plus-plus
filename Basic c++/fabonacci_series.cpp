#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c,sum=0;
    cout<<"enter the range if the fabbonacci series ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(;;){
        c=a+b;
        
        a=b;
        b=c;
                if(c>n){
            break;
        }
        cout<<c<<" ";

    }
    
    return 0;
}