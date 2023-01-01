#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    map<int,int> mp;
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
       int sum =0;
        int len =0;
        map<int,int>m;
        for(int i =0;i<n;i++){
            sum += A[i];
            if(sum ==0){
                len = i+1;
            }
            else if(m.find(sum)!=m.end()){
            if( i-m[sum]> len)
                len = i-m[sum];
            }
            else{
                m[sum]=i;
            }
        }
        return len;
    }
int main()
{
    
    int n,a;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
    cin>>a;
    vec.push_back(a);
    }
   cout<<maxLen(vec,n);
    return 0;
}