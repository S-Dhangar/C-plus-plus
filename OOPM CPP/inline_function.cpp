#include<iostream>
using namespace std;
inline int product(int a,int b)
{
    return a*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
return 0;
}
// when we should not use
// with static variables and also not use for big functions as they use more memory and at the time of recursion