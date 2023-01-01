#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<int> asteroidCollision(int N, vector<int> &a) {
        // code here
      stack<int> st;
      int i=0;
      while(i!=a.size()){
          if(st.empty()==1){
              st.push(a[i]);
          }
          else if(a[i]<0){
              while(st.empty()!=1 && st.top()>0 && abs(a[i])>st.top()){
                  st.pop();
              }
              if(st.empty()==1){
                  st.push(a[i]);
              }
              else if(st.top()<0){
                  st.push(a[i]);
              }
              else if(st.top()==abs(a[i])){
                  st.pop();
              }
          }
          
          else if(a[i]>0){
              st.push(a[i]);
          }
          
          i++;
      }
        vector<int> ans;
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                    
                }
                reverse(ans.begin(),ans.end());
                return ans;
    }
int main() {
      int n;
      cin>>n;
      vector<int> vec;
      int a;
      for(int i=0;i<n;i++){
              cin>>a;
              vec.push_back(a);
      }
      vec=asteroidCollision(n, vec);
      for(int i=0;i<vec.size();i++){
              cout<<vec[i]<<" ";
      }
return 0;
        
}
