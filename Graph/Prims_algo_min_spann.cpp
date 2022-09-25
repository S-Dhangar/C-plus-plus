#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void push(vector<int> arr[], int a, int b)
{
    arr[a].push_back(b);
    arr[b].push_back(a);
}

int prims(vector<int> arr[],vector<vector<int>> &cost,int n){

    vector<int> mincost(n,INT_MAX),vis(n,0),path(n,-1);
    int src;
    cout<<"enter the source node ";
    cin>>src;
    mincost[src]=0;
    int min,u;
    int tcost=0;
    for(int i=0;i<n;i++){

        int min=INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if(mincost[j]<min && vis[j]!=1){
                min=mincost[j];
                
                u=j;
               
            }
        }
        vis[u]=1;
        for(auto k: arr[u]){
            if(mincost[k]>cost[u][k] && vis[k]!=1){
            mincost[k]=cost[u][k];

            path[k]=u;
            }
        }





    }
int sum=0;
cout<<"min spanning tree is "<<endl;
for (int i = 0; i < n; i++)
{   sum=sum+mincost[i];
    cout<<path[i]<<" ";
}
cout<<endl;
cout<<endl;
    return sum;




}




int main()
{
    int n;
    cin >> n;
    vector<int> arr[n];
    int edges;

    cout << "enter the number of edges ";
    cin >> edges;
    int a, b, c;
    vector<vector<int>> cost(n,vector<int> (n,0));
    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b >> c;
        push(arr, a, b);
        cost[a][b] = c;
        cost[b][a]=c;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto j : arr[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
cout<<"Cost matrix is "<<endl;
    for (int i = 0; i < n; i++)
    {
        
        for (int j=0;j<n;j++)
        {
           cout<<cost[i][j]<<" ";
        }
        cout << endl;
    }
cout<<prims(arr,cost,n);



    return 0;
}