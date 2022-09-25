#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void push(vector<int> arr[], int u, int v)
{
    arr[u].push_back(v);
}

void topsort(vector<int> arr[], int ind[], int n)
{

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (ind[i] == 0)
            q.push(i);
    }

    vector<int> tsort;
    while (q.empty() != 1)
    {
        int a = q.front();
        tsort.push_back(a);
        q.pop();

        for (auto i : arr[a])
        {

            ind[i]--;
            if (ind[i] == 0)
            {
                q.push(i);
            }
        }
    }
vector<int> wt(n,INT_MAX);
int x;
cout<<"enter the source node ";
cin>>x;
wt[x]=0;

int cost[7][7]={0};
int a,b,c;
for(int i=0;i<7;i++){
     cin>>a>>b>>c;
     cost[a][b]=c;
}


for (auto i=tsort.begin();i!=tsort.end();i++)
{
   
    for (auto j:arr[*i])
    {
         if(wt[j]>wt[*i]+cost[*i][j]){
            wt[j]=wt[*i]+cost[*i][j];
           
        }
    }
    
}
for (int k = 0; k < n; k++)
{
    cout<<wt[k]<<" ";
}




}

int main()
{
    int n;
    cin >> n;

    vector<int> arr[n];
    push(arr, 0, 1);
    push(arr, 0, 4);
    push(arr, 1, 2);
    push(arr, 2, 3);
    push(arr, 4, 2);
    push(arr, 4, 5);
    push(arr, 5, 3);
    int indegree[n] = {0};
    for (int i = 0; i < n; i++)
    {

        for (auto j : arr[i])
        {

            indegree[j]++;
        }
    }

    topsort(arr, indegree, n);

    return 0;
}