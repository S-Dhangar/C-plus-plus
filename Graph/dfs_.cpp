#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ins(vector<int> arr[],int u,int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void dfs_traversal(vector<int> arr[],int src){

stack<int> st;
st.push(src);
int arr1[100]={0};
while(st.empty()!=1)
{
    int top=st.top();
    st.pop();
    cout<<top<<" ";
    arr1[top]=1;
   
    for (auto i:arr[top])
    {
        if(arr1[i]!=1){
             st.push(i);
             arr1[i]=1;
        }
       
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
dfs_traversal(arr,src);


    return 0;
}