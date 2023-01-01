#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    int num=pow(2,n);
    
    for(int i=1;i<num;i++){
        vector<int> vec;
        int k=i;
        while(k>0){
            vec.push_back(k&1);
            k=k>>1;
            
        }
        int s=vec.size();
        for(int j=1;j<=n-(s);j++){
            vec.push_back(0);

        }
        reverse(vec.begin(),vec.end());
        for (int j = 0; j < vec.size(); j++)
        {
            if(vec[j]==1)
            cout<<arr[j];
        }
        cout<<endl;
        vec.clear();
        
    }
    

    
   /* all twe subarrays(in sequence)
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           for(int k=j;k<=i;k++){
               cout<<arr[k];
           }
           cout<<endl;
       }
   }
   */


  
    return 0;
}
