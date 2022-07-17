#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int count;
    string s;
    map<string,int> m;
    cout<<"enter the numknbetr of strings ";
    cin>>count;
    for (int i = 0; i < count; i++)
    
    {
        cin>>s;
       m[s]=i;
    }
    cin>>s;
    cout<<m[s];
    return 0;
}