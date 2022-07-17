#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main(){
    int a,b;
    cout<<"enter the number to which you want to find gcd";
    cin>>a>>b;
    
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}