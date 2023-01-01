#include<iostream>
#include<bits/stdc++.h>
using namespace std;


    string swap(string str,int l,int r){
        char temp=str[l];
        str[l]=str[r];
        str[r]=temp;
        return str;
    }
    void permute(string str,int l,int r){
            if(l==r){
                cout<<str<<" ";
                return;
            }
            for(int i=l;i<=r;i++){
                str=swap(str,i,l);
                permute(str,l+1,r);
               str= swap(str,i,l);
            }
            return;
    }
   
int main()
{
    string abc;
    cin>>abc;
    permute(abc,0,abc.length()-1);

    return 0;
}