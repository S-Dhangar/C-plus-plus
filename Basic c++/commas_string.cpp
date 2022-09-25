#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i=0;
    int k;
    cin>>k;
    int num;
    int j=0,count=0;
    while(i<str.length())
    {
        num=str[i]-'0';
        while(num<=k){
            i++;
            j=1;
            
            num=num*10+ (atoi("7"));
        }
        if(j)
        i--;
        i++;
        count++;
    }
    cout<<(--count);

    return 0;
}