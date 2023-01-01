 #include<iostream>
 #include<bits/stdc++.h>
  using namespace std;

 bool increasingTriplet(vector<int>&nums);


 
 int main()
 {
     int n;
     cin>>n;
     vector<int> vec;
     for (int i = 0; i <n; i++)
     {
      int a;
      cin>>a;
      vec.push_back(a);
     }
     increasingTriplet(vec);
     return 0;
 }
 
 bool increasingTriplet(vector<int>& nums) {
        int j=INT_MAX,k=INT_MAX,l=INT_MAX,i=0;
         for(i=0;i<nums.size();i++){
           if(nums[i]<=j){
               j=nums[i];
           }
             else if(nums[i]<=k){
                 k=nums[i];
             }
             else{
                 return true;
             }
            
        }
       return false;
    }