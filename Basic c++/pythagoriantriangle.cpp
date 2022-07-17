#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c){
    int x;
    int m=max(a,max(b,c));
    if(a==m){
        x=b*b+c*c;
    }
    else if(b==m){
        x=a*a+c*c;
    }
    else{
        x=a*a+b*b;
    }
    if(x==a*a || x==b*b || x==c*c){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cout<<"enter the values of a b and c";
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"triangle is pythagorian triple";

    }
    else{
        cout<<"triangle is not pythagorian triple ";
    }


    return 0;
}