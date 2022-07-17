#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    string str,str1;
    cout<<"enter string"<<endl;
    getline(cin,str);

   
  //  str1=str;
 //   reverse(str.begin(),str.end());
    
  //getline(cin,str1);
    //cout<<str<<" "<<str1<<endl;
   
   // sort(str.begin(),str.end());
    //    cout<<str+str1;
   //cout<< str.compare(str1);
   
  // if(str==str1){
  //     cout<<"\a";
 //  }
 // else{
 //      cout<<"string is not palindrome";
  // }
    
      int i;
     for( i=0;i<str.length();i++){
       if(str[i]=='s'){
         cout<<"present"; 
         break;
       }
     }
     if(i==str.length()){
      cout<<"not present";
     }
   
  


    return 0;
}
