#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    int a;

    for(int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    for(auto it=vec.begin();it!=vec.end();it++){
        if(*it==2){
            vec.erase(it);
            it--;

        }
    }
 for (auto it = vec.begin();it!=vec.end(); it++)
 {
     /* code */
     cout<<*it<<" ";
 }
 
    return 0;
}