#include<iostream>
using namespace std;
int reach(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return reach(n-1)+reach(n-2)+reach(n-3);
}
int main()
{
    int n;
    cin>>n;
    int result=reach(n);
    cout<<result;
    return 0;
}