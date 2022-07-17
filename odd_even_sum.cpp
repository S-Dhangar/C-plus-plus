#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
   
    char str[n];
   long long a=0,b=0,c=0;
 
    cin>>str;
    n=strlen(str);
    for(int i=0;i<n;i++){
        if(i%2==0){
            a=a+(str[i]-48);
            
        }
        else{
            b=b+(str[i]-48);
           
        }
    }
  
    c=a-b;
    if(c>0)
   cout<<c;
   else
   cout<<-c;
    return 0;
}