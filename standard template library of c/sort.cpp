#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[7]={7,1,9,5,2,3,4};
    sort(a,a+7);
    for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}