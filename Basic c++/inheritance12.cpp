


//sequence of execution of constructor and destructor in multiple inheritance.
#include<iostream>
using namespace std;
class A 
{
public:
A()
{
cout<<"\n Zero-argument constructor of base class A";}
~A()
{
cout<<":\n Destructor of the class A";}
};
class B 
{
public:
B()
{
cout<<"\n Zero-argument constructor of base class B";}
~B() {cout<<"\n Destructor of the class B" ;}
};
class C : public A, public B 
{
public:
C()
{
cout<<"\n Zero-argument constructor of derived class C";
}
~C() 
{
cout<<"\n Destructor of the class C";
}
};
int main()
{
C  objc; 
return (0);
}
