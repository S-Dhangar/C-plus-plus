#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char usr_name[30],psw[20];

cout<<"\n enter the username==";
cin>>usr_name;
cout<<"\n enter the password==";
cin>>psw;
try
{
if(strcmp(usr_name,"nit")==0 &&strcmp(psw,"nit")==0)
cout<<"\n welcome to my application";
else
throw 'f';
}
catch(char x)
{
cout<<"\n invalid username or password";
}

return 0;
}
