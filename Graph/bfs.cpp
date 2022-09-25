#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

int main()
{
    int v;
    cin>>v;
    vector<int>adj[v];
    push(adj,0,1);
    push(adj,1,2);

    push(adj,2,4);
    push(adj,2,3);
    push(adj,3,4);
    
    push(adj,4,5);

   
      
    for(int i=0;i<v;i++){
        cout<<i<<" -> ";
        for(auto j:adj[i] ){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    int arr[v]={0};
    queue<int> q;
    cout<<"enter source node ";
    int src;

    cin>>src;
    q.push(src);
   
    arr[src]=1;
    int num;
    while(q.empty()==false){
        num=q.front();
        for(auto i:adj[num]){
            if(arr[i]!=1){
                q.push(i);
                arr[i]=1;
            }
        }
        cout<<" "<<num;
      //  [0,1],[0,2],[3,5],[5,4],[4,3]
      
        q.pop();
    }
    cout<<endl;
  for(int i=0;i<v;i++){

      cout<<arr[i]<<" ";
  }
    return 0;
}