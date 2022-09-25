#include<iostream>
using namespace std;
int p(int m,int n){
    int pro=1,res=1;
    for(int i=n;i<=(m+n-2);i++){
        pro=pro*i;
        pro=pro/(i-n+1);
    }
   
    return pro;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<p(m,n);
    return 0;
}