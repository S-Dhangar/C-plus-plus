#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main(){
        set<string> str;
        string str1[10];
        for(int i=0;i<10;i++){
            cin>>str1[i];
        }
        for(auto i:str1){
            str.insert(i);
        }
        
        for(auto i:str){
            cout<<i;
        }
 }