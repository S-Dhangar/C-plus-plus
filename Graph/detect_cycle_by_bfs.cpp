#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int> arr[],int a,int b){
    arr[b].push_back(a);
    arr[a].push_back(b);
}


int bfs(vector<int> arr[],int arr1[],int parent[],int src){
     cout<<"enter source node ";
     cin>>src;
     queue<int> q;
    q.push(src);
    parent[src]=src;
    arr1[src]=1;
    int num;
     while(q.empty()==false){
        num=q.front();
        q.pop();
        for(auto i:arr[num]){
            if(arr1[i]!=1){
                q.push(i);
                parent[i]=num;
                arr1[i]=1;
            }
            else if(i!=parent[num]){
                return 1;
            }
        }
    }
  return 0;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr[n];
    push(arr,0,1);
    push(arr,1,2);
    push(arr,2,4);
    push(arr,4,3);
    push(arr,3,2);
    push(arr,2,5);
    push(arr,5,3);
    
    
  
    

    for (int i = 0; i <n; i++)
    {
        cout<<i<<" -> ";
        for (auto j:arr[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    int arr1[n]={0};
     int parent[n];
    cout<<endl;
    
    cout<<bfs(arr,arr1,parent,0);




    return 0;
}