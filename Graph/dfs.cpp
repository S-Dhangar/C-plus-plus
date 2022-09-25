#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int>adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void dfs(vector<int>adj[],int src,int v){
    stack<int> st;
    st.push(src);
    int arr[v]={0};
  
    int a;
    while(st.empty()!=1){
        
          a=st.top();
          st.pop();
          if(arr[a]==0)
            cout<<a<<" ";
            arr[a]=1;
            
            for (auto i:adj[a])
            {
                if(arr[i]==0){
                    st.push(i);
                   
                    
                }    

            }
        
    }
}



int main()
{
    int v;
    cin>>v;
    vector<int>adj[v];
     push(adj,0,1);
    push(adj,0,2);
    push(adj,0,6);
    
    push(adj,1,3);

    push(adj,1,4);

    push(adj,2,3);
    push(adj,2,6);
    
    push(adj,3,4);
    push(adj,3,5);

    push(adj,5,6);
    
   
    for(int i=0;i<v;i++){
       
        cout<<i<<" -> ";
        for(auto j:adj[i] ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    dfs(adj,0,v);



    return 0;
}