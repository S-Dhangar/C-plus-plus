#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s,Z;
    cin>>t;
    while(t){
        cin>>s>>Z;
        int S[s];
        for(int i=0;i<s;i++){
            cin>>S[i];
        }
    
        sort(S,S+s);
        for(int i=0;i<s;i++){
            cout<<S[i]<<" ";
        }
        t--;
    }
    
    return 0;
}