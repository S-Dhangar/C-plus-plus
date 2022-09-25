#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> vec;
int print(vector <int> arr,int i,vector<int> v,int n){
    if(i==n){
         vec.push_back(v);
        return 0;
    }
    print(arr,i+1,v,n);
   v.push_back(arr[i]);
    print(arr,i+1,v,n);
   

}

vector<vector<int>> FindAllSubsets(int n, vector<int> &arr){
    // Write your code here
   
   vector<int> v;
    print(arr,0,v,n);


 return vec;
}


int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    FindAllSubsets(n,v);
    for (auto i:vec)
    {
        /* code */
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
