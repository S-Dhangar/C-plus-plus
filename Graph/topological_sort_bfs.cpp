#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int> arr[],int u,int v){
    arr[u].push_back(v);
 

}

void topsort(vector<int> arr[],int ind[],int n){

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if(ind[i]==0)
        q.push(i);
    }
    


    while(q.empty()!=1){
         int a=q.front();
        if(ind[a]==0){
           
            cout<<a<<" ";
             q.pop();
        }
            for (auto i: arr[a])
            {
               
                ind[i]--;
                if(ind[i]==0){
                    q.push(i);
                }
            }
    }

}


int main()
{
    int n;
    cin>>n;

    vector<int> arr[n];
    push(arr,0,2);
    push(arr,0,3);
    push(arr,2,1);
    push(arr,2,3);
    push(arr,3,1);
    push(arr,4,3);
    push(arr,5,1);
    push(arr,5,4);
    push(arr,1,4);
    int indegree[n]={0};
    for (int i = 0; i <n; i++)
    {
      
        for (auto j :arr[i])
        {
           
           indegree[j]++;
        }
       
    }
    
    

    topsort(arr,indegree,n);


    
    
    
    
    return 0;
}