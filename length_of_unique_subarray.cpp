#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int find(char a,string str1){
for(auto i:str1){
    if(i==a){
    return 1;
    }     
}
     return 0;
     
 }
    
    int lengthOfLongestSubstring(string s) {
        string str;
        int k=0;
        vector<int>vec;

        
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
       
                 if(find(s[j],str)){
                str.clear();
                vec.push_back(k);
                k=0;
                break;
            }
               else{
               str=str+s[j];
                k++;
               }
                
                
            }
           
        }
        
           int max=*max_element(vec.begin(),vec.end());
            return max;
               
               
    
    }
};

int main(){
string s;
getline(cin,s);

Solution obj;
cout<<obj.lengthOfLongestSubstring(s);


}