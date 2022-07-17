#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pq.push(-arr[i]);
    }
    while(pq.size()>1){
    int a=-pq.top();
    pq.pop();
    int b=-pq.top();
    pq.pop();
    int c=a+b;
    pq.push(-c);

    }
    cout<<pq.top();
    return 0;
    
}