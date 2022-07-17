//Program-4: Write a program to derive a class privately.
#include<iostream>
using namespace std;
class A 
{
int x;
public:
A()
{x=20;}
void showx()
{
cout<<"\n x="<<x;
}
};
class B : private A 
{
public:
int y;
B()
{ y=40;
}
void show()
{
showx();
cout<<"\n y="<<y;
}
};
int main()
{

B b; 
b.show();
return 0;
}
