#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char pt[100]={'I',' ','a','m',' ','I','r','o','r','l','d',' ','h','e','r','e',' ','i','s'};
    
    
    char *p=pt;
    int i=0;
    string str;
    
    string str1[10];
    i=0;
    int j=0;
    while(p[i]!='\0'){
       str1[j]=str1[j]+p[i];
        if(p[i]==' '){
          
            j++;
        }
     
             
    i++;
       
    }
    str1[j]=str1[j]+' ';
    j=0;
    vector<string> vec;
    while(j<10){
        vec.push_back(str1[j]);
        
        j++;
    }
    
   reverse(vec.begin(),vec.end());
   for(auto i=vec.begin();i!=vec.end();i++){
       str=str+(*i);
   }
  
    char array[str.length()];
    for(int i=0;i<str.length();i++){
        array[i]=str[i];
       
    }
p=array;
     while(*p!='\0'){
         cout<<*p;
         p++;
     }
    return 0;
}