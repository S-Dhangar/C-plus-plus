#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& arr,int n,int k){
    k=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}
int main(){
    int n,a;
   vector<int> vec;
   cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    int k;
    cin>>k;
    rotate(vec,vec.size(),k);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}