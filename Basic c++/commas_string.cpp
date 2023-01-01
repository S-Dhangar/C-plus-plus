#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    
    int k;
    cin>>k;
    int num,i=0;
    int j=0,count=0;
    while(i<str.length())
    {
        num=str[i]-'0';
        while(num<=k){
            i++;
            j=1;
            
            num=num*10+ (str[i]-'0');
        }
        if(j)
        i--;
        i++;
        count++;
    }
    count--;
    cout<<(--count);

    return 0;
}