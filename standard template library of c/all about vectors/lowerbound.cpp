#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   vector<int> v,w;
    int n,num,queries;
    cin>>n;
       for(int i=0;i<n;i++){
           cin>>num;
           v.push_back(num);
       }
       cin>>queries;
       for(int i=0;i<queries;i++){
           cin>>num;
           w.push_back(num);
       }
       int index=0;
       auto j=v.begin();
       for(auto i=w.begin();i<w.end();i++){
             for(j=v.begin();j<v.end();j++){
                 if(*j==*i){
                     index=j-v.begin()+1;
                     cout<<"Yes "<<index<<endl;
                     break;
                 }
              
             }
              if(j==v.end()){
                   for(auto k=v.begin();k<v.end();k++){
                        if(*i<*k){
                            index=k-v.begin()+1;
                            cout<<"No "<<index<<endl;
                              break;  
                        }  
                                      
                   }
               }
           
       }
       int low=lower_bound(v.begin(),v.end(),6);
       cout<<low;
    return 0;
}
