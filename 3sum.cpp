#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<vector<int>> vec;
        vector<vector<int>> st;
        int i=0,j=1,k=arr.size()-1;
        j=i+1;
        while(i<k){
            j=i+1;
            k=arr.size()-1;
        while(j<k && i<j){
            if((arr[i]+arr[j]+arr[k])==0){
               
                vec.insert({arr[i],arr[j],arr[k]});
               
               
            }
            if((arr[i]+arr[j]+arr[k])<0){
                j++;
            }
            else{
                k--;
            }
        }
        i++;
        }
        for(auto i:vec){
            st.push_back(i);
        } return st; }
int main()
{
   vector<vector<int>> vec;
   vector<int> v;
   int a,n;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a;
       v.push_back(a);
   }

   vec=threeSum(v);
   for(int i=0;i<vec.size();i++){
      for (int j = 0; i < 3; j++)
      {
          /* code */
          cout<<vec[i][j]<<" ";
      }
      cout<<endl;
      
   }
    return 0;
}