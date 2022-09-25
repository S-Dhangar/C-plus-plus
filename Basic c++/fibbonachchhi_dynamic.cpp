#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibbo(int array[],int num){
    int i;
    for(i=2;i<=num;i++){
    array[i]=array[i-1]+array[i-2];
    }
    return array[i-1];
}
int main(){
    int num;
    cin>>num;
    int array[100]={0};

    array[1]=1;

    cout<<array[0]<<" "<<array[1]<<" ";

    for(int i=2;i<num;i++){
    cout<<fibbo(array,i)<<" ";
    }
    return 0;
}