#include<iostream>
using namespace std;
int steps(int a,int b,int i){
    if(a==b){
        return i;
    }
    if()
    steps(a+b,b,i+1);
    steps(a,a+b,i+1);
}
int main()
{
    int x,y;
    cin>>x>>y;
    int i=0;
    cout<<steps(x,y,i);
    return 0;
}