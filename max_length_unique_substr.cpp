#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string str) {
      int max1=0;
      
        for(int i=0;i<str.length();i++){
            vector<bool> visit(256);
            for(int j=i;j<str.length();j++){
                if(visit[str[j]]==true){
                    break;
                    
                }
                else{
                    max1=max(max1,j-i+1);
                    visit[str[j]]=true;
                }
            }
            
        }
    return max1;
    }
int main()
{
    string str;
    cin>>str;
    
    cout<<lengthOfLongestSubstring(str);
    return 0;
}