#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<int> all_max_el(vector<int> arr,int n,int k){
       vector<int> vec;
       deque<int> q;
       int i=0;
        for(i=0;i<k;i++){
          
            while(q.empty()!=1 && arr[q.back()]<=arr[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        
        for(;i<n;i++){
            vec.push_back(arr[q.front()]);
            while(q.empty()!=1 && (i-k)>=q.front()){
                q.pop_front();
            }
            
            while(q.empty()!=1 && arr[q.back()]<=arr[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        vec.push_back(arr[q.front()]);
        return vec;
 }
int main()
{
    
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++)
    {
    cin>>vec[i];
    }
    vec=all_max_el(vec,n,k);
    for(int i=0;i<vec.size();i++)
    {
    cout<<vec[i];
     
    }
    return 0;
}