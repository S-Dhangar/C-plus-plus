#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ins(vector<int> arr[],int u,int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
    
}

void dfs_traversal(vector<int> arr[],int src,int ar[]){
ar[src]=1;

cout<<src<<" ";
for (auto i : arr[src])
{
    if(ar[i]==0){
        dfs_traversal(arr,i,ar);
    }
}



}


int main()
{
    int n;
    cin>>n;
    vector<int> arr[n];
    int a,b;
    int t=1;
    while (t)
    {
        cin>>a>>b;
        ins(arr,a,b);
        cout<<"do you want to connect more ";
        cin>>t;
    }
    
    

    for(int i=0;i<n;i++){
        cout<<i<<" -> ";
        for(auto j:arr[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }


cout<<"enter the source node ";
int src;
cin>>src;
cout<<"Now the dfs traversal of this gragh is "<<endl;
int ar[n]={0};
dfs_traversal(arr,src,ar);


    return 0;
}