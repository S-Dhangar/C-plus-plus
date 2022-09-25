#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void push(vector<int> arr[],int a,int b){
    arr[b].push_back(a);
    arr[a].push_back(b);
}

void dfs(vector<int> arr[],int arr1[],int src){
arr1[src]=1;
cout<<src<<" ";
for (auto i:arr[src])
{
    if(arr1[i]==0){
        dfs(arr,arr1,i);

    }
}

}

int c=0;

int check_cycle(vector<int> arr[],int arr2[],int arr3[],int src)
{
  arr2[src]=1;
  
  for (auto i:arr[src])
  {
    if(arr2[i]==0){
        arr3[src]=1;
       
        check_cycle(arr,arr2,arr3,i);

    }
    else if(arr3[i]==1){
       
        return 1;
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
    
    push(arr,2,3);
    push(arr,3,4);
    push(arr,3,5);
    push(arr,4,5);

    

    for (int i = 0; i <n; i++)
    {
        cout<<i<<" -> ";
        for(auto j:arr[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

int arr1[n]={0};
cout<<"DFS traversal of these graph is "<<endl;
dfs(arr,arr1,0);
cout<<endl;
int arr2[n]={0};
int arr3[n]={0};

    if(check_cycle(arr,arr2,arr3,0)){
        cout<<"In which cycle is present ";
    }
    else{
        cout<<"In which cycle is not present";
    }


    
    return 0;
}