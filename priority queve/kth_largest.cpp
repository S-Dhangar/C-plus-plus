#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        pq.push(-arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i]>(-pq.top())){
            pq.pop();
            pq.push(-arr[i]);
        }
    }
    cout<<-pq.top();
    return 0;
}