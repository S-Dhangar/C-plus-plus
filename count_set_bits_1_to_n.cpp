#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int poweroftwo(int n){
        int x=0;
        while((1<<x)<=n){
            x++;
        }
        return x-1;
    }
    int countSetBits(int n)
    {
        // Your logic here
        
        if(n==0){
            return n;
        }
        int power= poweroftwo(n);
        int ans1= power*(1<<(power-1));
        int ans2= n-(1<<power)+1;
        int ans3=n-(1<<power);
        int ans4= ans1+ans2+countSetBits(ans3);
        return ans4;
        
    }
int main()
{
    
    int n;
    cin>>n;
    cout<<countSetBits(n);
    return 0;
}