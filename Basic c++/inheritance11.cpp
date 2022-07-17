// MULTIPATH INHERITANCE //
// VIRTUAL BASE CLASSES //
#include<iostream>
using namespace std;
class A1
{
protected:
int a1;
};
class A2 : public virtual A1 
{
protected:
int a2;
};
class A3 : public virtual A1 
{
protected:
int a3;
};
class A4 : public A2,A3 
{
int a4;
public:
void get()
{
cout<<"Enter values for a1, a2,a3 and a4:";
cin>>a1>>a2>>a3>>a4;
}
void put()
{
cout<<"a1="<<a1 <<"a2="<<a2 <<"a3="<<a3 <<"a4="<<a4;
}
};
int main()
{

A4 a;
a.get(); 
a.put(); 

return (0);
}


