#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(string str,int i,int n){
        if(i==(n-1)){
            cout<<str<<endl;
            return;
        }
        for(int j=i+1;j<n;j++){
            
            swap(str[i],str[j]);
            permute(str,i+1,n);
            swap(str[i],str[j]);
        }
}
int main()
{
    string abc;
    cin>>abc;
    permute(abc,0,abc.length());

    return 0;
}