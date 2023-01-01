#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    cin>>b>>a;

    int sign=1;
    b=abs(b);
    a=abs(a);

    if(a>0 && b<0){
        sign=-1;
    }
    if(a<0 && b>0){
        sign=-1;
    }
    long long rem=0,q=0;
    for(int i=31;i>=0;i--){
        if(rem+(a<<i) <= b){
            rem=rem+ (a<<i);
            q= q+ (1LL<<i);
        }
    }
    if(sign==-1)
    q=-q;
    cout<<q;
    return 0;
}